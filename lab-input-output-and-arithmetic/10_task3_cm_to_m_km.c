//3. Write a C program to enter length in centimeter and convert it into meter and kilometer.
#include <stdio.h>

int main(){
    float a, m, km;
    
    printf("Enter the value in cm :");
    
    scanf("%f", &a);
    
    m = a / 100 ;
    
    km = a / 100000 ;
    
    printf("value of cm in m is: %f \n" , m);
    printf("value of cm in km is: %f \n", km);
    
    return 0;

}