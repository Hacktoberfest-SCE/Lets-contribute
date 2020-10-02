// The Program takes and swaps the number given by the user
#include <bits/stdc++.h>
using namespace std;
int main(){
    int x,y;
    cout << "Enter no.1 : ";
    cin >> x;
    cout << "Enter no.2 : ";
    cin >> y;
    int temp = x;
    x = y;
    y = temp;
    cout << "The reversed nos. are now "<< x << " and "<< y <<endl;
}
