#include <stdio.h>

int main() {
    int rows, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    /* Pattern 1: right-angled triangle of stars */
    printf("\nPattern 1\n");
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    /* Pattern 2: number triangle */
    printf("\nPattern 2\n");
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}