//program to generate the star pattern(half pyramid)
#include<stdio.h>
#include<conio.h>
main()
{
   int i,j,k,r;
   clrscr();
   for(i=1;i<=6;i++)
   {
     for(j=1;j<=i;j++)
     {
       printf("%d\t",j);
     }
     printf("\n");
   }
 }
