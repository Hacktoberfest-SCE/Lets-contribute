#include <iostream>

using namespace std;

int gcdHelper(int a, int b)
{
    if (a == 0 || b == 0)
    {
        return a + b;
    }
    return gcdHelper(b, a % b);
}

int gcd(int a, int b)
{
    return gcdHelper(max(a, b), a + b - max(a, b));
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << gcd(abs(a), abs(b)) << endl;
    return 0;
}