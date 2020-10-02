//print the duplicate characters in a string
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cout<<"Enter a string: "<<endl;
    cin >> str;
    map<char, int> mp;
    for (int i = 0; i < str.length(); i++)
    {
        mp[str[i]]++;
    }
    int flag = 0;
    cout << "Duplicate characters in the string are: ";
    for (auto i : mp)
    {
        if (i.second > 1)
        {
            flag = 1;
            cout << i.first << " ";
        }
    }
    if (flag == 0)
        cout << " none";
    cout << endl;
}
