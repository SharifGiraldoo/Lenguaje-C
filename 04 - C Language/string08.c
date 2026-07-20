/*
Program: string08.c
Description: Program that prints two string input using fgets()
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
    char a[30], b[30];
    printf("Input string: ");
    fgets(a, sizeof(a), stdin);

    printf("Input another string value: ");
    fgets(b, sizeof(b), stdin);


    printf("{%s} is the first string\n",a);
    printf("{%s} is the second string\n",b);

    return 0;
}