//program to find the factorial of the number
#include<stdio.h>
#include<conio.h>
main()
{
    int n;
    long ans;
    printf("enter a number");
    scanf("%d",&n);
    ans=fact(n);
    printf("factorail of %d is %ld",n,ans);
 }
 
 long fact(int n)
 {
    if(n==1)
    {
       return(1);
    }
    else
    {
       if(n>1)
       {
          return(n*fact(n-1));
       }
    }
 }
