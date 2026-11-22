/* #include <stdio.h>

int main()
{
    int array[10];

    array[0] = 10;
    array[9] = 20;
    array[3] = 100;

    for (int i=0; i< 10; i++)
    {
        printf("%d\n", array[i]);
    }

} */




/*
#include <stdio.h>

int main()
{
    int array[10] = {0} ;

    array[0] = 10;
    array[9] = 20;
    array[3] = 100;

    for (int i=0; i< 10; i++)
    {
        printf("%d\n", array[i]);
    }

}
*/
/*
#include <stdio.h>

int main()
{
    int array[5] = {0} ;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter value for %d: ", i+1);
        scanf("%d", &array[i]);
    }

    for (int i=0; i< 5; i++)
    {
        printf("%d\n", array[i]);
    }
    for (int i=0; i< 5; i +i)
    {
        printf("Sum: %d", array[i]);
    }

}
*/
/*
#include <stdio.h>

int main()
{
    int array[10] = {0} ;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter value for %d: ", i+1);
        scanf("%d", &array[i]);
    }

    for (int i=0; i< 10; i++)
    {
        printf("%d ", array[i]);
    }

}
*/
#include <stdio.h>

int main()
{
    int array[10] = {0} ;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter value for %d: ", i+1);
        scanf("%d", &array[i]);
    }

    int sum = 0;

    for (int i=0; i<10; i++)
    {
        sum = sum + array[i];
    }
    printf("sum: %d\n", sum);
    printf("avg: %f\n", (float)sum/5);

}


























