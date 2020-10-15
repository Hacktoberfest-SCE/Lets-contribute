# factorial of a number using recursion
def fact(n):
  if n==1:
    return n
  else:
    return n*fact(n-1)
number = int(input())
if number<0:
  print("doesn't exist for negative number")
elif number==0:
  print("factorial of 0 is 1")
else:
  print("factorial of",number,"is",fact(number))
