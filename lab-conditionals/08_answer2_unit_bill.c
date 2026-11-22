#include <stdio.h>

int main() {

    int customer;
    float unit, Bill;

    printf("Customer ID: ");
    scanf("%d",&customer);

    printf("Units: ");
    scanf("%f",&unit);

    if(unit  > 100)
    {
        Bill = unit * 8;
    }
    else
    {
        Bill = unit * 5;
    }
    printf("Total Bill = %f",Bill);


}
