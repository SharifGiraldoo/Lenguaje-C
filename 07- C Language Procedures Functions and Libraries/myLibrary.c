/**
 * Program: myLibrary.c
 * Description: Implementation of the functions from the library "myLibrary"
 * Date: July 2026
 */

#include <stdio.h>



/**
 * Function that allows reading an integer
 * @param input Prompt shown to the user
 * @return The integer entered by the user
 */
int readInteger(char input[])
{
    int value;

    printf("%s", input);
    scanf("%d", &value);

    return value;
}

/**
 * Function that adds two integers
 * @param n1 First integer
 * @param n2 Second integer
 * @return Sum of both integers
 */
int sumIntegers(int n1, int n2)
{
    return n1 + n2;
}

/**
 * Procedure that prints an integer with text
 * @param text Text to display
 * @param value Integer value to print
 */
void printInteger(char text[], int value)
{
    printf("%s %d\n", text, value);
}


