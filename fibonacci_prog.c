#include<stdio.h>
int main()
{
int a, b, result, n,i;
printf("Enter the number of terms\n");
scanf("%d", &n);
a=0;
b=1;
for(i=1; i<=n; i++)
{
	printf("%d\n",a);
	result= a+b;
	a=b;
	b=result;
}
return 0;
}
