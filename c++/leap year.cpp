//program to find whether the given year is laep year or not
#include<stdio.h>
#include<math.h>
main()
{
   int y,rem;
   printf("enter the year");
   scanf("%d",&y);
   rem=y%4;
   if(rem==0)
   {
      printf("it is a leap year");
   }
   else
      {
        printf("it is not a leap year");
      }
}
