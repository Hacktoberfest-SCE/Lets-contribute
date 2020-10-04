// this program is an implementation of array cyclic rotation.
#include <bits/stdc++.h> 
using namespace std;

#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define f(i, a, b) for(i=a;i<b;i++)
#define fr(i, a, b) for(i=a; i>b; i--)


void reverse(string s);

int main() {

	IOS;
	string s;
	cin >> s;

	reverse(s);




}


void reverse(string s) {
	int l = s.length();
	if (s[0] != '-') {
		reverse(s.begin(), s.end());
	}
	else {
		reverse(s.begin() + 1, s.end());
	}

	cout << s;

}
