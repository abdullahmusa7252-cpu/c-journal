#include <stdio.h>
int main()
{
  int i = 1;
  int sum = 1;
  while (i <=5)
  {
    sum = sum * i;
    i++;
  }
  
  printf("%d", sum);
}
