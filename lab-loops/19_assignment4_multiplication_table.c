#include <stdio.h>

int main()
{
    int n, multi = 1;
    printf("Enter the value for n table: ");
    scanf("%d", &n);
    int i;
    for (i = 1; i <= n ; i++)
    {
        multi = n * i;
        printf("%d x %d = %d\n",n,i, multi); //used "num x num = numResult" for better clarification.
    }
}