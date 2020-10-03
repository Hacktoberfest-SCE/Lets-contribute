#this program is to reverse an integer
#include<stdio.h>
int main()
{
int n;
int dig,revnum;
printf("enter an integer number :");
scanf("%d",&n);
revnum=0;
while(n>0)
{
dig=n%10;
revnum=(revnum*10)+dig;
n=n/10;
}
printf("\n reverse number is : %d\n",revnum);
return 0;
}
