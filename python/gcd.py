# Python Program to find GCD of Two Numbers a temp variable
num1 = int(input("enter a number"))
num2 = int(input("enter another number"))
a = num1
b = num2
while(num2 != 0):
# swap using temp variable
  temp = num2
  num2 = num1 % num2
  num1 = temp
gcd = num1
print("the gcd of two numbers is ", gcd, )