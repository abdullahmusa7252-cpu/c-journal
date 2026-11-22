#include <stdio.h>
#include <math.h>

int main ()
{
  int n,sum;
  printf("Enter the value for n: ");
  scanf("%d", &n);
  sum = (pow(10, n) - 1)/9;
  printf("%d\n", sum);
  
  
}