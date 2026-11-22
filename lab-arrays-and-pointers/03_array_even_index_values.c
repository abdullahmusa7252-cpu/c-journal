//Take 10 input and only print the even index value.
#include <stdio.h>
int main()
{
    int array[10] = {0} ;
    for (int i = -1; i < 9; i++)
    {
        printf("Enter value for Index no.%d: ", i+1);
        scanf("%d", &array[i]);
    }

    int value = 1;

    for (int i=0; i<9; i++)
    {
        if (i%2 != 0 && i != 0) // normally array doesnt start from one it starts from zero i.e for array[10] the index value will be 0 to 9 not 1 to 10.
        {
            value = array[i];
            printf("EVEN INDEX: %d\n", value);
        }
    
    }
    

}