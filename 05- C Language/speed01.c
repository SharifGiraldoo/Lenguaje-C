/*
Program: speed01.c
Description: Calculates moving speed of a student
Date: July 2026
*/

//Libraries
#include <stdio.h>


//Main function

int main(void)
{
    
    float v, x, t;

    scanf("%f",&x);
    scanf("%f", &t);

    v = x / t;

    printf("%.2f", v);

    return 0;
}