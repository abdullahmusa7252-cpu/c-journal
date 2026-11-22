//Write a C program to enter temperature in Fahrenheit(°F) and convert it into Celsius(°C)

#include <stdio.h>

int main(){
    float C, F;
    printf("Enter today's temperature om Fahrenheit Unit: ");
    scanf("%f", &F);
    C = (F - 32) * 5/9;
    printf("Today temperature is : %f Celsius", C);


}