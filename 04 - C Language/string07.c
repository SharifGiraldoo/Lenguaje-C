/*
Program: string07.c
Description: Program that prints two string input using gets()
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
    gets(a);

    printf("Input another string value: ");
    gets(b);


    printf("{%s} is the first string\n",a);
    printf("{%s} is the second string\n",b);

    return 0;
}