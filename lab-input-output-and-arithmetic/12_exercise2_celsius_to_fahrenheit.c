// Write a C program to enter temperature in °Celsius and convert it into °Fahrenheit.
#include <stdio.h>

int main(){
    float C, F;
    printf("Enter today's temperature om Celsius Unit: ");
    scanf("%f", &C);
    F = (C * 9/5) + 32;
    printf("Today temperature is : %f Fahrenheit", F);


}