// This Program finds the factorial of the no.
#include<iostream> //It is used to include the header file for input output functions
using namespace std;
int main(){
   int n;
  int fact=1;
  cout<<"Enter N:  "<<endl;
  cin>>n;
  for(int i=1;i<=n;i++)
    fact=fact*i;
cout<<fact << endl;
}
