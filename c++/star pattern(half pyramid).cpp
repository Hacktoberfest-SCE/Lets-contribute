//C++ program to display half star pyramid

#include <iostream>
int main()
{
   int n, i, j;

   cout << "Enter number of rows: ";
   cin >> n;

   for(i = 1; i <= n; i++)
   {
    for(j = 1; j <= i; j++)
      {
         cout << "* ";
      }
      cout << "\n";
   }
   return 0;
}
