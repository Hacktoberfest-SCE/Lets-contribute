//this program is to perform the matrix multiplication 
#include<iostream>
#include<iomanip.h>
#include<conio.h>
class matrix
{
   private :
              int m,n,r,c,a[10][0];
   public  :
              void getdata(int x,int y)
              void display()
              friend matrix operator*(matrix,matrix);
};
void matrix :: getdata(int x,int y)
{
   m=x;
   n=y;
   cout<<"enter the elements one by one"<<endl;
   for(r=0;r<m;r++)
   {
     for(c=0;c<n;c++)
     {
       cin>>a[r][c];
     }
   }
}
matrix operator * (matrix m1,marix m2)
{
  int r,c,k;
  matrix t;
  t.m=m1.m;
  t.n=m2.n;
  for(r=0;r<m1.m;r++)
  {
    for(c=0;c<m2.n;c++)
    {
      t.a[r][c]=0;
      for(k=0;k<m1.n;k++)
      {
        t.a[r][c]=t.a[r][c]+(m1.a[r][k]*m2.a[k][c]);
      }
    }
  }
  return(t);
}
void matrix :; display()
{
  for(r=0;r<m;r++)
  {
    for(c=0;c<n;c++)
    {
      cout<<a[r][c]<<" ";
    }
    cout<<endl;
  }
}

void main()
{
   int m,n,x,y;
   clrscr();
   matrix m1,m2,m3;
   cout<<"enter the order of first matrix"<<endl;
   cin>>m>>n;
   cout<<"enter the order if second matrix"<<endl;
   cin>>x>>y;
   if(n!=x)
   {
     cout<<"matrix order is not proper"<<endl;
   }
   else
   {
     cout<<"first matrix"<<endl;
     m1.getdata(m,n);
     cout<<"secomd matrix"<<endl;
     m2.getdata(x,y);
     m3=operator*(m1,m2);
     cout<<"multipliction of matrix"<<endl;
     m3.display();
     getch();
   }
 }
