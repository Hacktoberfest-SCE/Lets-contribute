//Program uses switch case to take input and perform different calculations
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char op;
    float num1, num2;

    cout << "Enter operator plus minus multiplication or division: ";
    cin >> op;

    cout << "Enter the two operands: ";
    cin >> num1 >> num2;

    switch(op)
    {
        case '+':
            cout << num1+num2; //for addition
            break;

        case '-':
            cout << num1-num2;//for subtraction
            break;

        case '*':
            cout << num1*num2;//for multiplication
            break;

        case '/':
            cout << num1/num2;//for division
            break;

        default:
            // If the operator is other than +, -, * or /, error message is shown
            cout << "Error! operator is not correct";
            break;
    }

    return 0;
}
