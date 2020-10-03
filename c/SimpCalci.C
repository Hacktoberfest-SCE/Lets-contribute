/*Program for a simple calculator*/
#include<stdio.h>
#include<conio.h>
void main()
{
	float a,b,ans;
	char op;
	clrscr();
	printf(“\nEnter arithmetic expression :” );
	scanf(“%f%c%f”,&a,&op,&b);
	switch(op)
	{
		Case ‘+’:
			ans=a+b;
			printf(“\nAddition is %f”,ans);
			break;
Case ‘-’:
			ans=a-b;
			printf(“\nSubtraction is %f”,ans);
			break;
		Case ‘*’:
			ans=a*b;
			printf(“\nMultiplication is %f”,ans);
			break;
		Case ‘/’:
			if(b!=0)
			{
ans=a/b;
			printf(“\nDivision is %f”,ans);
			}
			else
			{
			printf(“\nDivision by zero error!”);
			}
			break;
			default:
				printf(“\nInvalid operator!”);
				break;
			}
	getch();
}
