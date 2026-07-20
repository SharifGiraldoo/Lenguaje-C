/*
Program: salary.c
Description: Calculates salary
Date: July 2026
*/

//Libraries
#include <stdio.h>


//Main function

int main(void)
{
    int hoursWorked;
    float hourlyWage, totalSalary;

    printf("Input how many hours you've worked: ");
    scanf("%d", &hoursWorked);

    printf("Input the hourly wage: ");
    scanf("%f", &hourlyWage);

    totalSalary = hoursWorked * hourlyWage;

    printf("The total salary to pay is: %.2f\n", totalSalary);

    return 0; 
}