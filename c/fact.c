//This program is to find the factorial of a number
#include<stdio.h>
int main()
{
int i,fact=1,number;
printf("enter a number");
scanf("%d",&number);
for(i=1;i<=number;i++)
{
fact=fact*i;
}
printf("factorial of %d is %d",number,fact);
return 0;
}
