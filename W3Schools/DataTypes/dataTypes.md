# C Data Types

A complete reference guide to data types in the C programming language — covering sizes, formats, usage, and practical examples.

---

## Table of Contents

- [What Is a Data Type?](#what-is-a-data-type)
- [Basic Data Types](#basic-data-types)
  - [int](#int)
  - [float](#float)
  - [double](#double)
  - [char](#char)
- [Type Modifiers](#type-modifiers)
- [Format Specifiers](#format-specifiers)
- [Quick Reference Table](#quick-reference-table)
- [Declaring and Printing Variables](#declaring-and-printing-variables)
- [Common Mistakes](#common-mistakes)
- [Notes on Portability](#notes-on-portability)

---

## What Is a Data Type?

In C, every variable must be declared with a **data type** before it can be used. The data type tells the compiler:

- How much **memory** to allocate for the variable.
- What **kind of data** the variable can hold (whole numbers, decimals, characters, etc.).
- Which **operations** are valid on the variable.

C is a statically typed language — types are checked at compile time, not at runtime.

---

## Basic Data Types

### `int`

Stores **whole numbers** (no decimal point).

| Property | Value |
|----------|-------|
| Size | 2 or 4 bytes (platform-dependent; typically 4 bytes on 32/64-bit systems) |
| Range (4 bytes) | −2,147,483,648 to 2,147,483,647 |
| Format specifier | `%d` or `%i` |

```c
int age = 25;
int temperature = -10;
int year = 2024;

printf("%d\n", age);         // Output: 25
printf("%i\n", temperature); // Output: -10
```

> **Note:** `%d` and `%i` are interchangeable for `printf`, but behave differently in `scanf` — `%i` accepts octal (0-prefixed) and hexadecimal (0x-prefixed) input, while `%d` treats all input as decimal.

---

### `float`

Stores **fractional (floating-point) numbers** with **single precision**.

| Property | Value |
|----------|-------|
| Size | 4 bytes |
| Precision | ~6–7 significant decimal digits |
| Range | ~1.2 × 10⁻³⁸ to ~3.4 × 10³⁸ |
| Format specifier | `%f` or `%F` |

```c
float price = 9.99;
float pi = 3.14159f;   // 'f' suffix explicitly marks it as float

printf("%f\n", price);    // Output: 9.990000 (6 decimal places by default)
printf("%.2f\n", price);  // Output: 9.99 (2 decimal places)
```

> **Tip:** Use the `f` suffix (e.g., `3.14f`) when assigning literals to `float` variables. Without it, the literal is treated as a `double`, which can cause implicit truncation warnings.

---

### `double`

Stores **fractional numbers** with **double precision** — more accurate than `float`.

| Property | Value |
|----------|-------|
| Size | 8 bytes |
| Precision | ~15–16 significant decimal digits |
| Range | ~2.3 × 10⁻³⁰⁸ to ~1.7 × 10³⁰⁸ |
| Format specifier | `%lf` |

```c
double distance = 149597870.7;    // Earth-Sun distance in km
double precise_pi = 3.14159265358979;

printf("%lf\n", precise_pi);      // Output: 3.141593 (default 6 decimals)
printf("%.10lf\n", precise_pi);   // Output: 3.1415926536
```

> **When to use `double` vs `float`:** Prefer `double` for scientific calculations, financial computations, or any situation requiring high precision. Use `float` only when memory usage is a concern (e.g., large arrays, embedded systems).

---

### `char`

Stores a **single character**, encoded as its **ASCII value** (an integer from 0 to 127).

| Property | Value |
|----------|-------|
| Size | 1 byte |
| Range | −128 to 127 (signed) or 0 to 255 (unsigned) |
| Format specifier | `%c` (character) or `%d` (numeric ASCII value) |

```c
char letter = 'A';
char digit  = '7';
char newline = '\n';  // Escape sequence

printf("%c\n", letter);   // Output: A
printf("%d\n", letter);   // Output: 65  (ASCII value of 'A')
```

Character literals are enclosed in **single quotes** `' '`. String literals use **double quotes** `" "` and are a different type (`char` array / pointer).

#### Common ASCII Values

| Character | ASCII Code |
|-----------|-----------|
| `'A'`–`'Z'` | 65–90 |
| `'a'`–`'z'` | 97–122 |
| `'0'`–`'9'` | 48–57 |
| `' '` (space) | 32 |
| `'\n'` (newline) | 10 |

---

## Type Modifiers

Basic types can be extended using **type modifiers** to adjust range and signedness:

| Modifier | Applies To | Effect |
|----------|-----------|--------|
| `short` | `int` | Reduces size to 2 bytes |
| `long` | `int`, `double` | Increases size (4 or 8 bytes for `int`; 8–16 bytes for `double`) |
| `long long` | `int` | Guarantees at least 8 bytes |
| `unsigned` | `int`, `char` | Removes negative range; doubles positive range |
| `signed` | `int`, `char` | Explicitly allows negative values (default behavior) |

```c
unsigned int positive_only = 4294967295U;  // Max value for 32-bit unsigned int
short int small_num = 32767;
long long int big_num = 9223372036854775807LL;

printf("%u\n", positive_only);
printf("%hd\n", small_num);
printf("%lld\n", big_num);
```

---

## Format Specifiers

Format specifiers are used inside `printf()` and `scanf()` to match data types correctly.

| Specifier | Data Type | Notes |
|-----------|-----------|-------|
| `%d` | `int` | Signed decimal integer |
| `%i` | `int` | Signed integer (also reads hex/octal in `scanf`) |
| `%u` | `unsigned int` | Unsigned decimal integer |
| `%f` | `float` | Decimal floating point (lowercase) |
| `%F` | `float` | Decimal floating point (uppercase `INF`/`NAN`) |
| `%lf` | `double` | Double-precision float |
| `%Lf` | `long double` | Long double |
| `%c` | `char` | Single character |
| `%s` | `char[]` / `char*` | String (null-terminated) |
| `%hd` | `short int` | Short integer |
| `%ld` | `long int` | Long integer |
| `%lld` | `long long int` | Long long integer |
| `%x` / `%X` | `unsigned int` | Hexadecimal (lower/upper) |
| `%o` | `unsigned int` | Octal |
| `%p` | pointer | Memory address |
| `%e` / `%E` | `float`, `double` | Scientific notation |
| `%g` / `%G` | `float`, `double` | Shorter of `%f` or `%e` |
| `%%` | — | Literal `%` character |

> ⚠️ **Important:** Using the wrong format specifier causes **undefined behavior** — the program may produce garbage output, crash, or behave unpredictably.

---

## Quick Reference Table

| Type | Size | Range | Format |
|------|------|-------|--------|
| `char` | 1 byte | −128 to 127 | `%c` / `%d` |
| `unsigned char` | 1 byte | 0 to 255 | `%c` / `%u` |
| `short int` | 2 bytes | −32,768 to 32,767 | `%hd` |
| `unsigned short int` | 2 bytes | 0 to 65,535 | `%hu` |
| `int` | 4 bytes | −2,147,483,648 to 2,147,483,647 | `%d` |
| `unsigned int` | 4 bytes | 0 to 4,294,967,295 | `%u` |
| `long int` | 4 or 8 bytes | Platform-dependent | `%ld` |
| `long long int` | 8 bytes | −9.2 × 10¹⁸ to 9.2 × 10¹⁸ | `%lld` |
| `float` | 4 bytes | ~1.2×10⁻³⁸ to ~3.4×10³⁸ | `%f` |
| `double` | 8 bytes | ~2.3×10⁻³⁰⁸ to ~1.7×10³⁰⁸ | `%lf` |
| `long double` | 8–16 bytes | Platform-dependent | `%Lf` |

---

## Declaring and Printing Variables

```c
#include <stdio.h>

int main() {
    // Declaration and initialization
    int      myInt    = 42;
    float    myFloat  = 3.14f;
    double   myDouble = 2.718281828;
    char     myChar   = 'C';

    // Printing with correct format specifiers
    printf("int:    %d\n",  myInt);
    printf("float:  %.2f\n", myFloat);
    printf("double: %.9lf\n", myDouble);
    printf("char:   %c (ASCII: %d)\n", myChar, myChar);

    return 0;
}
```

**Output:**
```
int:    42
float:  3.14
double: 2.718281828
char:   C (ASCII: 67)
```

---

## Common Mistakes

### 1. Mismatched format specifier
```c
float x = 3.14f;
printf("%d\n", x);  // ❌ Wrong — undefined behavior
printf("%f\n", x);  // ✅ Correct
```

### 2. Integer division losing decimals
```c
int a = 7, b = 2;
printf("%f\n", a / b);    // ❌ Outputs 3.000000 — both operands are int
printf("%f\n", (float)a / b); // ✅ Outputs 3.500000 — explicit cast
```

### 3. Forgetting character vs. string syntax
```c
char letter = "A";  // ❌ Double quotes = string literal (char pointer)
char letter = 'A';  // ✅ Single quotes = character literal
```

### 4. Overflow from wrong type
```c
char c = 200;       // ❌ Overflow if char is signed (max 127)
unsigned char c = 200; // ✅ Safe
```

---

## Notes on Portability

- The exact size of `int` and `long` is **platform-dependent**. To guarantee specific sizes, use the fixed-width types from `<stdint.h>`:
  ```c
  #include <stdint.h>
  
  int8_t   a;   // Exactly 8 bits signed
  uint16_t b;   // Exactly 16 bits unsigned
  int32_t  c;   // Exactly 32 bits signed
  int64_t  d;   // Exactly 64 bits signed
  ```
- Use `sizeof()` to check the actual size of a type on the current platform:
  ```c
  printf("int is %zu bytes\n", sizeof(int));
  printf("double is %zu bytes\n", sizeof(double));
  ```

---

