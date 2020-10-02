#include <stdio.h>
int main()
{
int i, j, n, k = 0;
scanf(“%d”,&n);

for(i=n; i>=1; --i)
{
for(j=0; j < n-i; ++j)
printf(” “);

for(j=i; j <= 2*i-1; ++j)
printf(“* “);

for(j=0; j < i-1; ++j)
printf(“* “);

printf(“\n”);
}

return 0;
}
