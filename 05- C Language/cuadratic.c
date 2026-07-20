/*
 * Description: Calculates the real solutions of a quadratic equation
 * Date: July 2026
 */

// Include libraries
#include <stdio.h>
#include <math.h>

/*
 * Main function
 */
int main()
{
    float a, b, c, x1, x2;

    printf("Enter the value of a: ");
    scanf("%f", &a);

    printf("Enter the value of b: ");
    scanf("%f", &b);

    printf("Enter the value of c: ");
    scanf("%f", &c);

    x1 = (-b + sqrt(pow(b, 2.0) - 4.0 * a * c)) / (2.0 * a);
    x2 = (-b - sqrt(pow(b, 2.0) - 4.0 * a * c)) / (2.0 * a);

    printf("The solutions are: %.2f and %.2f", x1, x2);

    return 0;
}