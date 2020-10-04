#include<iostream.h>
#include<stdio.h>

int main()
{
    char op;
    float num1, num2;
    cout << "Enter operator either + or - or * or /: ";
    cin >> op;
    cout << "\nEnter two operands: ";
    cin >> num1 >> num2;
    switch(op)
    {
        case '+':
            cout <<"\nResult is: "<< num1+num2;
            break;

        case '-':
            cout <<"\nResult is: "<< num1-num2;
            break;

        case '*':
            cout <<"\nResult is: "<<num1*num2;
            break;

        case '/':
            cout <<"\nResult is: "<<num1/num2;
            break;
          
        case '%':
            cout <<"\nResult is: "<<num1%num2;
            break;
            
        default:
            // If the operator is other than +, -, * , % or /, error message is shown
            cout<<"Error! operator is not correct";
            break;
    }
getch();
return 0 ;
}

