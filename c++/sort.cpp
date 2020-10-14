#include<iostream.h>
#include<iomanip.h>
#include<conio.h>

template<class T>
T sort(T a[],int n)
{
   for(int i=0;i<=n-1;i++)
   {
     for(int j=i+1;j<n;j++)
     {
       if(a[i]>a[j])
       {
         T temp;
         temp=a[i];
         a[i]=a[j];
         a[j]=temp;
        }
      }
    }
 }
 void main()
 {
    clrscr();
    int a[10],i,n;
    float b[10];
    char c[10];
    cout<<"enter the number of elements"<<endl;
    cin>>n;
    cout<<"enter the integer numbers one by one"<<endl;
    for(i=0;i<n;i++)
    {
       cin>>a[i];
    }
    cout<<"enter the float numbers one by one"<<endl;
    for(i=0;i<n;i++)
    {
       cin>>b[i];
    }
    cout<<"enter the character one by one"<<endl;
    for(i=0;i<n;i++)
    {
      cin>>c[i];
    }
    cout<<"the sorted integer numbers are"<<endl;
    sort(a,n);
    for(i=0;i<n;i++)
    {
       cout<<a[i]<<endl;
    }
    cout<<"sorted float numbers are"<<endl;
    sort(b,n);
    for(i=0i<n;i++)
    {
      cout<<b[i]<<endl;
    }
    cout<<"the sorted character are"<<endl;
    sort(c,n)
    {
      cout<<c[i]<<endl;
    }
}
    
       
