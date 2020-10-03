//program to find the year is leap year or not 
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
     printf("its a leap year");
   }
   else
   {
      printf("its not a leap year");
   }
}
    
