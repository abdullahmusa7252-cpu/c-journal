//1. Write a C Program to Calculate Area of a Square, take length of one side as user input.
#include <stdio.h>

int main(){
    float a, area;
    printf("Enter the value to find the area of Square: ");
    scanf("%f", &a);
    area = a * a;
    printf("The area of the square is : %f", area);
    return 0;
}
//used float to so that we can input decimal values to find the area of square.