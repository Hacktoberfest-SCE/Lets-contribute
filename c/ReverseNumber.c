#include <stdio.h>

int reverseNum (int num) {
  int rev = 0;
  int negFlag = 1; // flag for negative or positive num
  if (num < 0) {
      negFlag = -1;
      num = -num;
  }
  while (num > 0) {
      rev = rev*10 + num%10;
      num = num/10;
  }
  return (negFlag < 1) ? -rev : rev;
};

int main()
{
  int num;
  printf("Enter a number");
  scanf("%d", &num);
  int rev_num = reverseNum(num);
  printf("Reverse of a number is %d", rev_num);
  return 0;
}
