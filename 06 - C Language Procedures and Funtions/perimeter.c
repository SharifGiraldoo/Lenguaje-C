/**
 * Program: perimeter.c
 * Description: Calculates distance and perimeter
 * Date:  July 2026
 */

// Library inclusion
#include <stdio.h>
#include <math.h>

// Function prototypes
float calculateDistance(float x1, float y1, float x2, float y2);
float calculatePerimeter(float xP1, float yP1,
                         float xP2, float yP2,
                         float xP3, float yP3);

// Main function
int main(void)
{
    float xPoint1, yPoint1;
    float xPoint2, yPoint2;
    float xPoint3, yPoint3;
    float perimeter;

    printf("Enter the x-coordinate of the first point: ");
    scanf("%f", &xPoint1);

    printf("Enter the y-coordinate of the first point: ");
    scanf("%f", &yPoint1);

    printf("Enter the x-coordinate of the second point: ");
    scanf("%f", &xPoint2);

    printf("Enter the y-coordinate of the second point: ");
    scanf("%f", &yPoint2);

    printf("Enter the x-coordinate of the third point: ");
    scanf("%f", &xPoint3);

    printf("Enter the y-coordinate of the third point: ");
    scanf("%f", &yPoint3);

    perimeter = calculatePerimeter(
        xPoint1, yPoint1,
        xPoint2, yPoint2,
        xPoint3, yPoint3);

    printf("\nThe perimeter of the triangle is: %.2f\n", perimeter);

    return 0;
}

/**
 * Calculates the Euclidean distance between two points.
 */
float calculateDistance(float x1, float y1, float x2, float y2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

/**
 * Calculates the perimeter of a triangle.
 */
float calculatePerimeter(float xP1, float yP1,
                         float xP2, float yP2,
                         float xP3, float yP3)
{
    float side1, side2, side3;

    side1 = calculateDistance(xP1, yP1, xP2, yP2);
    side2 = calculateDistance(xP2, yP2, xP3, yP3);
    side3 = calculateDistance(xP3, yP3, xP1, yP1);

    return side1 + side2 + side3;
}