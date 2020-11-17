//this is a program to print the half pyramid pattern using cpp

#include<iostream.h>//header file for input and output operations
int main()
{
    int n;
    cin >>n;
     for(int i = 1; i <=n; ++i)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout << "*"<< " ";
        }
        cout << "\n";
    }
getch();
return 0 ;
}
