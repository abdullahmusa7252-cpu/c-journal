//1. Write a C program to enter two numbers and perform all arithmetic operations.
#include <stdio.h>

int main(){
    float tech1 , tech2 , op1, op2, op3, op4;
    printf("Enter value for first variable: ");
    scanf("%f" , &tech1);
    printf("Enter value for second variable: ");
    scanf("%f", &tech2);
    op1 = tech1 + tech2 ;
    op2 = tech1 - tech2 ;
    op3 = tech1 * tech2 ;
    op4 = tech1 / tech2 ;
    printf("Addtion : %f \n", op1);
    printf("Substraction : %f \n", op2);
    printf("multiply : %f \n", op3);
    printf("Divison: %f \n", op4);

    return 0;

}
//first question complete . Here we used float beacause using int won't help us getting the value of Divsion.