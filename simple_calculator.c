// #5 simple calculator//
#include<stdio.h>
int main()
{
int n1,n2, result;
char op;
printf("Enter the expression[operand1 operator operand2]:");
scanf("%d %c %d",&n1, &op, &n2);
switch(op)
{
  case '+': result= n1+n2;
            printf("\nsum=%d",result);
            break;
  case '-': result=n1-n2;
            printf("\ndifference=%d", result);
            break;
  case '*': result=n1*n2;
            printf("\nproduct=%d", result);
            break;
  case '/': if(n2!=0)
            {
              result= n1/n2;
              printf("\nquotient=%d", result);
            }
            else
            {
             printf("\nError");
            }
          break;
  case '%': result=(n1%n2);
            printf("\nremainder=%d", result);
            break;
  default: printf("\nINVALID");
           break;
}
return 0;
}
