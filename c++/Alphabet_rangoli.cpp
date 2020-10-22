#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 0;
    while (i < n)
    {
        int j = 0;
        while (j < n - 1 - i)
        {
            cout << "--";
            j++;
        }
        j = i;
        char c = 'a' + n - 1;
        while (j > 0)
        {
            cout << c << "-";
            c--;
            j--;
        }
        cout << c;
        c++;
        j = 0;
        while (j < i)
        {
            cout << "-" << c;
            c++;
            j++;
        }
        j = 0;
        while (j < n - 1 - i)
        {
            cout << "--";
            j++;
        }
        cout << endl;
        i++;
    }
    i = n - 1;
    while (i > 0)
    {
        int j = 0;
        while (j < n - i)
        {
            cout << "--";
            j++;
        }
        j = i;
        char c = 'a' + n - 1;
        while (j > 1)
        {
            cout << c << "-";
            c--;
            j--;
        }
        cout << c;
        c++;
        j = 0;
        while (j < i - 1)
        {
            cout << "-" << c;
            c++;
            j++;
        }
        j = 0;
        while (j < n - i)
        {
            cout << "--";
            j++;
        }
        cout << endl;
        i--;
    }
    return 0;
}