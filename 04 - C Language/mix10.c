/*
Program: mix10.c
Description: Program that prints int and string input
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
    int a
    char b[30];
    printf("Input integer: ");
    scanf("%d", a);

    printf("Input another string value: ");
    fgets(b, sizeof(b), stdin);
    strtok(b,"\n")


    printf("{%d} is the integer value\n",a);
    printf("{%s} is the string\n",b);

    return 0;
}