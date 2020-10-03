//this program is to find the gcd of two numbers
#include<stdio.h>
int gcd(int m,int n)
main()
{
    int n,m,res;
    printf("enter the two numbers\n");
    scanf("%d%d",&m,&n);
    res=gcd(m,n);
    printf("the gcd of two numbers %d and %d is %d\n",m,n,res);
    getch();
 }
   int gcd(int m,int n)
   {
      if(m==n)
      {
        return(m);
      }
      else
      {
        if(m>n)
        {
          return(gcd(n,m-n));
        }
      } 
      else
      {
        if(m<n)
        {
          return(gcd(n,m));
        }
       }
    }
