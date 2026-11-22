#include <stdio.h>

int main() {

    float member;
    float amount;
    float discount;
    float payable;

    printf("Purchase Amount: Tk. ");
    scanf("%f",&amount);

    printf("Premium Member? (1=Yes, 0=No): ");
    scanf("%f", &member);

    if(member == 1 && amount >= 1000)
    {
        discount = amount * 0.15;
    }


    payable = amount - discount;

    printf("Discount = Tk. %.2f\n",discount);
    printf("Payable = Tk. %.2f",payable);
}
