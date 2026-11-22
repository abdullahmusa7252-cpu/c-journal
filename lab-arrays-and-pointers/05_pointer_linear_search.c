#include <stdio.h>

int main()
{
    int arr[100], n, k, i, found = 0;
    int *ptr;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    ptr = arr; // points to first element

    printf("\nEnter element to search: ");
    scanf("%d", &k);

    for(i = 0; i < n; i++)
    {
        if(*(ptr + i) == k)
        {
            printf("\nElement %d found at position %d\n", k, i + 1);
            found = 1;
            break;
        }
    }

    if(!found)
        printf("\nElement not found in array.\n");

    return 0;
}