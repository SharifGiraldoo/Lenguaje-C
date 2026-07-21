/**
 * Program: multiplication02.c
 * Description: Program that multiplies two integers
 * Date: July 2026
 */


 //Libraries
#include "myLibrary2.h"

int multiplyIntegers(int a, int b);

//Main function
int main(void)
{
    int a, b, result;

    a = readInteger("Input the first number: ");
    b = readInteger("Input the second number: ");

    result = multiplyIntegers(a, b);

    printInteger("The result is: ", result);

    return 0; 
}

