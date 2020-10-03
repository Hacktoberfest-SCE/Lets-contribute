//program to find the fibonicis of a given number
#include<stdio.h>
int fibo(int n);
main()
{
   int n,res;
   printf("enter the value of N");
   scanf("%d",&n);
   res=fibo(n);
   printf("the %d term of fibonicis series is %d",n,res);
}
int fibo(int n)
{
   if(n==1)
   {
     return(1);
   }
   if (n==2)
   {
      return(1);
   }
   if(n>2)
   {
      return(fibo(n-1)+fibo(n-2));
   }
}
