//This Program is to find GCD of 2 numbers
#include<stdio.h>
int gcd(int a, int b)
{
  if(a==0)
    return b;
  if(b==0)
    return a;
  if(a==b)
    return a;
  if(a>b)
    return gcd(a-b, b);
 return gcd(a, b-a);
}
int main()
{
  int a=98,b=56;
  printf("GCD of %d and %d is %d",a,b,gcd(a,b));
  return 0;
}
