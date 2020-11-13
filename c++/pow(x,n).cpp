#include<iostream>
#include<conio.h>
#include<stdio.h>
int main()
{
int number,exponent,i,ans;
ans=1;
i=1;
cout<<"Please Enter a Number  : " ;
    cin>>number;
cout<<"Please Enter Exponent : ";
    cin>>exponent;
do
    {
    ans=ans*number;
    i++;
    }
    while(i<=exponent);
 
cout<<number<<"^"<<exponent<<"="<<ans;
    return 0;
}
 
