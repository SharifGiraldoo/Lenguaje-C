/*
Program: speed02.c
Description: Calculates moving speed of a student
Date: July 2026
*/

//Libraries
#include <stdio.h>


//Main function

int main(void)
{
    
    float v, x, t;

    printf("Write the distance in meters: ");
    scanf("%f",&x);

    printf("Write time in seconds: ");
    scanf("%f", &t);

    v = x / t;

    printf("Speed is %.2f m/s\n", v);

    return 0;
}