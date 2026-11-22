/***Problem Statement:** Write a complete C program that prompts the user to enter 
two integer numbers. The program should calculate and print their **sum**, **product**, 
and **integer quotient (division)**.*/

#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter the value for a: ");
    scanf("%d", &a);
    printf("Enter the value for b: ");
    scanf("%d", &b);
    
    printf("Addtion: %d\n", a+b);
    printf("Substraction: %d\n", a-b);
    printf("Multiplication: %d\n", a*b);
    printf("Reminder: %d\n", a%b);
    if (b != 0)
    {
        printf("Division: %d\n", a/b);
    }
    else
    {
        printf("Undefined\n");
    }
    

}