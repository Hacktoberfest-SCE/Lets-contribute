// Two for loops are used to print * pattern in X,y coordinates
#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "Enter number of rows: ";
    cin >> N;
    for (int i = 1; i <= N; ++i)//Accessing rows
    {
        for (int j = 1; j <= i; ++j)//Accessing columns
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
