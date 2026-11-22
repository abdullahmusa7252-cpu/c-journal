// Print all the odd number from 1 - 100
#include <stdio.h>

int main()
{
    int i = 1;
    while (i <= 100)
    {
     if (i%2 == 1)
     {
        printf("ODD: %d\n", i);
     }
    i++;
    }
    return 0;
}