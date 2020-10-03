#include <stdio.h>
int main()
{
//initialise the values of a and b
  int a=10, b=50;
  
//print the values of a and b before swapping
  printf("Before Swapping  a = %d  b = %d", a,b);

  a=a+b;   //a=60 (10+50)
  b=a-b;   //b=10 (60-50)
  a=a-b;   //a=50 (60-10)
  
//print the values of a and b after swapping
  printf("\nAfter Swapping  a = %d  b = %d", a,b);

  return 0;
}
