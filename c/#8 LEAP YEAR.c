#include<stdio.h>
int main()
{ 
    int year;
    printf("Enter a year to check if it is a leap year\n");
    scanf("%d",&year);
    if(year%400==0)
    printf(" TRUE %d is a leap year\n", year);
    else if(year % 100==0)
    printf("FALSE %d is not a leap year\n", year);
    else if(year %4==0)
    printf("TRUE %d is a leap year", year);
    else
    printf("FALSE %d is not a leap year",year);
    return 0;
}
