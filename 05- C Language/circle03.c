/*
Program: circle03.c
Description: Calculates radius and perimeter of a circle
*/

//Libraries
#include <stdio.h>
#include <math.h>

//Main function

int main(void)
{
    float radius, perimeter, area;

    printf("Input the circle's radius: ");
    scanf("%f", &radius);

    area = M_PI * radius * radius;
    perimeter = 2.0 * M_PI * radius;

    printf("The circle'area is: %.2f\n", area);
    printf("The circles perimeter is: %.2f\n", perimeter);

    return 0; 
}