//2. Write a C Program to Calculate Area and Circumference of Circle.
#include <stdio.h>

int main(){
    float a, b, c;
    printf("Enter the value to find the area and cirumference of circle! ");
    scanf("%f", &a);
    b = 3.1416 * a * a;
    c = 2 * 3.1416 * a;
    printf("Area of Circle: %f \n", b);
    printf("Circumference of Circle: %f \n", c);

}

//Do not have a clear knowledge if C supports power instead we used a single varaible twice for matching the formulas.