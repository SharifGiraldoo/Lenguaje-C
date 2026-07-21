/*
Program: sum02.c
Description: Program that adds two integers
Date: July 2026
*/

// Libraries
#include "myLibrary.h"

// Function prototypes
int readInteger(char input[]);
int sumIntegers(int n1, int n2);
void printInteger(char text[], int value);

// Main function
int main(void)
{
    int a, b, sum;

    a = readInteger("Input the first number: ");
    b = readInteger("Input the second number: ");

    sum = sumIntegers(a, b);

    printInteger("Sum is:", sum);

    return 0;
}

