/*
Program: float04.c
Description: Program that prints a float input
Date: July 2026
License: GNU GPL v3
*/

// Libraries
#include <stdio.h>

// Constants declaration

/*
Main function
*/
int main(void)
{
    // Variable declaration
    float a;
    printf("Input a Float number: ");

    scanf("%f", &a);

    printf("%f is the float value that you wrote\n", a);
    printf("%.2f is the float value that you wrote\n", a);
    printf("%8.2f is the float value that you wrote\n", a);

    return 0;
}