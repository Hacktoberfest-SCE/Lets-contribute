/*Program to find the factorial*/
#include<stdio.h>
int main()
{
  int i,number;
  long factorial=1;
  printf("\nPlease enter any number:");
  scanf("%d",&number);
  for(i=1;i<=number;i++)
  {
    factorial=factorial*i;
   }
   printf("\nFactorial of %d=%d\n",number,factorial);
   return 0;
}
