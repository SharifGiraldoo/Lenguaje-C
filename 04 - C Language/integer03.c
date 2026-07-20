/*
Program: integer03.c
Description: Program that prints two integer input in different formats
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
    int a, b;
    printf("Input an Integer value: ");

    /**
     * %4d limits the input to an 4 digit integer 
     * we need to be careful because the rest of the digits
     * will be taken by the other input
     */
    scanf("%4d", &a);

    printf("Input an Integer value: ");
    scanf("%d", &b);


    printf("%10d is the integer value that you wrote for a\n", a);
    printf("%-10d is the integer value that you wrote for a\n", a);

    printf("%010d is the integer value that you wrote for b\n", b);

    return 0;
}