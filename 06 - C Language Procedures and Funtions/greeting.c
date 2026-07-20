/**
 * Program: greeting.c
 * Description: Prints a greeting given an input name
 * Date: July 2026
 */

#include <stdio.h>

void printGreeting(char name[]);

// Main function
int main()
{
    char name1[30], name2[30];

    printf("Input the first name: ");
    fgets(name1, sizeof(name1), stdin);

    printf("Input the second name: ");
    fgets(name2, sizeof(name2), stdin);

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
