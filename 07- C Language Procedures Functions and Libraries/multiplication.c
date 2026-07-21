/**
 * Program: multiplication.c
 * Description: Program that multiplies two integers
 * Date: July 2026
 */


 //Libraries
#include "myLibrary.h"

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


/**
 * Function that allows multiplying two integers
 * @param n1 first integer
 * @param n1 second integer
 * @return multiplication of both numbers
 */

int multiplyIntegers(int n1, int n2)
{
    int result;

    result = n1 * n2;

    return result;
}