#include <stdio.h>

int main() {
    int n, original, digit, sum = 0, reverse = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    original = n;

    while (n > 0) {
        digit = n % 10;                 /* take the last digit */
        sum = sum + digit;              /* add it to the sum */
        reverse = reverse * 10 + digit; /* build the reverse */
        n = n / 10;                     /* remove the last digit */
    }

    printf("Number: %d\n", original);
    printf("Sum of digits: %d\n", sum);
    printf("Reversed number: %d\n", reverse);

    return 0;
}