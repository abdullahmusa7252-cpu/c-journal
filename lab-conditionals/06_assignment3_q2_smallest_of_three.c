/* 2. Write a code which takes input 3 numbers and finds the smallest number among them */
#include <stdio.h>

int main()
{
    float a, b, c;
    printf("Enter value for a: ");
    scanf("%f", &a);
    printf("Enter value for b: ");
    scanf("%f", &b);
    printf("Enter value for c: ");
    scanf("%f", &c);
    if (a < b)
    {
        if (a < c)
        {
            printf("Biggest number: %.0f", c);
        }
        else if (c < a)
        {
            printf("Biggest number: %.0f", a);
        }
        else
        {
            printf("Biggest number: %.0f", b);
        }
return 0;

}