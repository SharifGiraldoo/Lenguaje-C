/**
 * Program: greeting.c
 * Description: Prints a greeting given an input name
 * Date: July 2026
 */

#include <stdio.h>
#define readString(v) fgets(v, sizeof(v), stdin);

void printGreeting(char name[]);

// Main function
int main()
{
    char name1[30], name2[30];

    printf("Input the first name: ");
    readString(name1);

    printf("Input the second name: ");
    readString(name2);

    printGreeting(name1);
    printGreeting(name2);

    return 0;
}

/*
 * Procedure that prints a greeting from a given name
 * param: person's name to greet
 */

void printGreeting(char name[])
{
    printf("Hello,%s", name);
}
