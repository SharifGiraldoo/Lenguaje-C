/**
 * Program: point.c
 * Description: Program that shows information about two points in 2D
 * Date: July 2026
 */

// Libraries
#include <stdio.h>

void printPoint(char pointName, float x, float y);

// Main function
int main(void)
{
    char name1, name2;
    float x1, y1, x2, y2;

    // Input first point
    printf("Input the first point's name: ");
    scanf(" %c", &name1);

    printf("Cartesian coordinate of %c in x: ", name1);
    scanf("%f", &x1);

    printf("Cartesian coordinate of %c in y: ", name1);
    scanf("%f", &y1);

    // Input second point
    printf("\nInput the second point's name: ");
    scanf(" %c", &name2);

    printf("Cartesian coordinate of %c in x: ", name2);
    scanf("%f", &x2);

    printf("Cartesian coordinate of %c in y: ", name2);
    scanf("%f", &y2);

    // Print information
    printf("\n--- Point Information ---\n");
    printPoint(name1, x1, y1);
    printPoint(name2, x2, y2);

    return 0;
}

/**
 * Procedure that prints information about a point in 2D
 * param: name of the point (just one character)
 * param: Cartesian coordinates in x and y of the point
 */
void printPoint(char pointName, float x, float y)
{
    printf("Point %c is located at (%.2f, %.2f)\n", pointName, x, y);
}