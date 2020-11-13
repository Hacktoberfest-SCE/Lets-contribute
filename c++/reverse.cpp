#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int rev = 0;
	while(n > 0){
	  int r = n % 10;
	   cout<<r;
		n = n / 10;
	}
	return 0;
}
