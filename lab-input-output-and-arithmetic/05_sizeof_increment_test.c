#include <stdio.h>

int main()
{
    float a =100;
    float var = sizeof(++a);
    printf("The number of two values are a= %.0f , var = %.0f", a , var);
    return 0;
}