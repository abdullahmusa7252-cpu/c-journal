//Take 5 numbers in array and find the odd numbers.
#include <stdio.h>
int main()
{
    int array[5] = {0} ;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter value for %d: ", i+1);
        scanf("%d", &array[i]);
    }

    int value = 1;

    for (int i = 0; i < 5; i++)
    {
        value = array[i];
        if (value%2 == 0)
        {
        printf("EVEN Number: %d\n", value);
        }

    }
}