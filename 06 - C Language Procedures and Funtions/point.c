/**
 * Program: point.c
 * Description: Program that shows information about a point in 2D
 * Date: July 2026
 */

//Libraries
#include <stdio.h>

void printPoint(char pointName, float x, float y);

//Main function
int main(void)
{
    char name;
    float x, y;

    printf("Input the point's name: ");
    scanf("%c", &name);

    printf("Cartesian Coordinates of %c in x: ", name);
    scanf("%f", &x);

    printf("Cartesian Coordinates of %c in y: ", name);
    scanf("%f", &y);

    printPoint(name, x, y);

    return 0;

}


/**
 * Procedure that prints information about a point in 2D
 * param: name of the point (Just one character)
 * param: cartesian coordinates in x and y of the point
 */

void printPoint(char pointName, float x, float y)
{
    printf("Point %c", pointName);
    printf(" is located in (%.2f, %.2f) coordinates\n", x, y);
}