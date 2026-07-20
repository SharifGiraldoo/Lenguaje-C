/*
Program: string09.c
Description: Program that prints two string input using fgets() and strtok()
Date: July 2026
License: GNU GPL v3
*/


//Libraries
#include <stdio.h>
#include <string.h>

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
    strtok(a,"\n")

    printf("Input another string value: ");
    fgets(b, sizeof(b), stdin);
    strtok(b,"\n")


    printf("{%s} is the first string\n",a);
    printf("{%s} is the second string\n",b);

    return 0;
}