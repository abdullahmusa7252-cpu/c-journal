//Take 5 input in array and compute their multiplication
#include <stdio.h>
int main()
{
    int array[5] = {0} ;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter value for %d: ", i+1);
        scanf("%d", &array[i]);
    }

    int multi = 1;

    for (int i=0; i<5; i++)
    {
        multi = multi * array[i];
    }
    printf("Multiplication of 5 Given Numbers: %d\n", multi);

}