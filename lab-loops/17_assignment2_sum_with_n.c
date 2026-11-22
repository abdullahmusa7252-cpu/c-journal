#include <stdio.h>

int main()
{
    int n, sum = 1;
    printf("Enter the value for sum n: ");
    scanf("%d", &n);
    int i;
    for (i = 1; i <= n ; i++)
    {
        sum = n + i;
        printf("%d + %d = %d\n",n,i, sum);
    }
}