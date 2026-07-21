/*
Program: sum01.c
Description: Program that adds two integers
Date: July 2026
*/

//Libraries
#include <stdio.h>

//Main function
int main(void)
{
    int a, b, sum;

    printf("Input the first integer: ");
    scanf("%d", &a);

    printf("Input the second integer: ");
    scanf("%d", &b);

    sum =  a + b; 

    printf("The final result of adding the integers is: %d\n", sum);

    return 0;
}