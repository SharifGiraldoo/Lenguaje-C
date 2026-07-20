/*
Program: float05.c
Description: Program that prints two float inputs
Date: July 2026
License: GNU GPL v3
*/


//Libraries
#include <stdio.h>

//Constants declaration


/*
Main function
*/
int main(void)
{
    //Variable declaration
    float a, b;
    printf("Input a float value: ");

    /**
     * %4d limits the input to an 4 digit integer 
     * we need to be careful because the rest of the digits
     * will be taken by the other input
     */
    scanf("%4d", &a);

    printf("Input a float value: ");
    scanf("%d", &b);


    printf("%10d is the float value that you wrote for a\n", a);
    printf("%-10d is the float value that you wrote for a\n", a);

    printf("%010d is the float value that you wrote for b\n", b);

    return 0;
}