//this program is to swap the two numbers 
#include<iostream.h>
#include<iomanip.h>
#include<conio.h>
class swap;
class swap1
{
   private :
              int a;
   public  :
              void getdata()
              {
                cout<<"enter the value of a"<<endl;
                cin>>a;
              }
              friend void exchange(swap1 &s1,swap &s);
 };
 class swap
 {
   private :
              int b;
   public  :
              void getdata()
              {
                cout<<"enter the value of b"<<endl;
                cin>>b;
              }
              friend void exchange(swap1 &s1,swap &s);
 };
 void exchange(swap1 &s1,swap &s)
 {
    int temp;
    cout<<"before swapping"<<endl;
    cout<<"a="<<s1.a<<endl<<"b="<<s.b<<endl;
    temp=s1.a;
    s1.a=s.b;
    s.b=temp;
    cout<<"after swapping"<<endl;
    coiut<<"a="<<s1.a<<endl<<"b="<<s.b<,endl;
 }
 void main()
 {
    swap s;
    swap1 s1;
    s1.getdata();
    s.getdata();
    exchange(s1,s);
 }
