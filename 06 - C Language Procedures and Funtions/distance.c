/**
 * Program: distance.c
 * Description: program that calculates distance between two points
 * Date: July 2026
 */


//Libraries
#include<stdio.h>
#include <math.h>

float calculateDistance(float x1, float y1, float x2, float y2);

//Main function
int main(void)
{
    float xPoint1, yPoint1, xPoint2, yPoint2, distance;

    printf("Input x coordinates of the first point: ");
    scanf("%f", &xPoint1);

    printf("Input y coordinates of the first point: ");
    scanf("%f", &yPoint1);

    printf("Input x coordinates of the second point: ");
    scanf("%f", &xPoint2);

    printf("Input y coordinates of the second point: ");
    scanf("%f", &yPoint2);

    distance = calculateDistance(xPoint1, yPoint1, xPoint2, yPoint2);

    printf("Distance between points is %.2f\n", distance);

    return 0;
}


float calculateDistance(float x1, float y1, float x2, float y2)
{
    float distance;

    distance = sqrt(pow(x2 - x1, 2.0) + pow(y2 - y1, 2.0));

    return distance;
}