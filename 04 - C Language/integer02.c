/*
Program: integer02.c
Description: Program that prints an integer input
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
    int a;
    printf("Input an Integer: ");

    /*
    The & operator gets the memory direction or value assigned to the variable
    */
    scanf("%d", &a);


    printf("%d is the integer value that you wrote\n", a);

    return 0;
}