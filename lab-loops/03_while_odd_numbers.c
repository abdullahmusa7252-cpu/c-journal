#include <stdio.h>
int main()
{
  int i;
  printf("Enter the number:");
  scanf("%d", &i);
  while (i < 100)
  {
   if(i%2!=0)
   {
    printf("%d ",i);
   } 
    i++;
  }
return 0;
}
