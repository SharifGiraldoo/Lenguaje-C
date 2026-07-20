/*
Program: speed03.c
Description: Calculates moving speed of a student
Date: July 2026
*/

//Libraries
#include <stdio.h>


//Main function

int main(void)
{
    
    float speed, distance, time;

    printf("Input the distance in meters: ");
    scanf("%f",&distance);

    printf("Input time in seconds: ");
    scanf("%f", &time);

    speed = distance / time;

    printf("Speed is %.2f m/s\n", speed);

    return 0;
}