#include <stdio.h>
int main()
{
  int sum = 0;
  int n;
  printf("Enter the value for n: ");
  scanf("%d",&n);
  for (int i = 1; n!=0 ; i = i * 10 + 1)
  {
   sum = sum + i;
   n--;
  }
   printf("The sum is :%d", &sum);
}
