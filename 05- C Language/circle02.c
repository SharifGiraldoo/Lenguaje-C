/*
Program: circle02.c
Description: Calculates radius and perimeter ofa circle
*/

//Libraries
#include <stdio.h>

// Symbolic constants
#define PI 3.141592

//Main function

int main(void)
{
    float radius, perimeter, area;

    printf("Input the circle's radius: ");
    scanf("%f", &radius);

    area = PI * radius * radius;
    perimeter = 2.0 * PI * radius;

    printf("The circle'area is: %.2f\n", area);
    printf("The circles perimeter is: %.2f\n", perimeter);

    return 0; 
}