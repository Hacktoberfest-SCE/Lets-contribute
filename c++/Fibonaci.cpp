#include<iostream>
using namespace std;

void fibonacci(int n){
    int c, a= 0, b =1;
     for(int i = 1; i <= n - 1;i++){
         c = a + b;
         a = b;
         b = c;

        }
}

int main(){
  int n;
  cin>>n;
  cout<<fibonacci(n)<<endl;
}
