#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter two values a,b\n");
	scanf("%d %d",&a,&b);
	c=b;
	b=a;
	a=c;
	printf("swapped number a=%d, b=%d", a,b);
	return 0;
}
