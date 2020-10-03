// Three for loops are used to print * pattern in X,y coordinates forming a complete Pyramid inverted
#include <iostream>//headerfile
using namespace std;
int main()
{
    int N;
    cout << "Enter number of rows: ";
    cin >> N;
    for (int i = N; i >= 1; --i)
    {
        for (int space = 0; space < N - i; ++space)
            cout << "  ";

        for (int j = i; j <= 2 * i - 1; ++j)
            cout << "* ";

        for (int j = 0; j < i - 1; ++j)
            cout << "* ";

        cout << endl;
    }
    return 0;
}
