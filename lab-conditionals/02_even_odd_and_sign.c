#include <stdio.h>
int main()
{
    int number;
    printf(" Enter an integer : ");
    scanf("%d", &number);
    /* if - else : even or odd */
    if (number % 2 == 0)
        printf(" %d is an even number .\n ", number);
    else
        printf(" %d is an odd number .\n ", number);
    /* else - if ladder : sign of the number */
    if (number > 0)
        printf(" %d is positive .\n ", number);
    else if (number < 0)
        printf(" %d is negative .\n ", number);
    else
        printf(" The number is zero .\n ");
    return 0;
}