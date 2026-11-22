// 1 + 11 + 111 + ......... + n (create a sum of program based on this)
#include <stdio.h>
#include <math.h>

int main()
{
    int n,powsum;
    printf("Input the number to calculate the sum: ");
    scanf("%d", &n);
    powsum = pow(10, n) + 1;
    printf("%d\n", powsum);
    return 0;
}