/**
 * Program: perimeter.c
 * Description: Program that calculates the perimeter of a rectangle
 * Date: July 2026
 */


#include "myLibrary2.h"


int main(void)
{
    int side1, side2, perimeter;

    side1 = readInteger("Input the first side: ");
    side2 = readInteger("Input the second number: ");

    perimeter = multiplyIntegers(2.0, side1, side2);

    printInteger("Perimeter is: ", perimeter);

    return 0; 
}