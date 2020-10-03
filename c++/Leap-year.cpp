// Program takes a year input from the user and runs test cases.
#include <bits/stdc++.h>
using namespace std;
//library files for using cout cin without std:: 
int main()
{
    int year;

    cout << "Enter a year: ";
    cin >> year;

    if (year % 4 == 0) //multiple test cases for checking for the validity of year
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
                cout << " False." << endl;
            else
                cout << " True." << endl;
        }
        else
            cout << " True" << endl;
    }
    else
        cout <<"False." << endl;

    return 0;
}
