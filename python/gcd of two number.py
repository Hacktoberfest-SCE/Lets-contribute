#this is the program of gcd of 2 numbers
def(a,b):
  while(a!=0):
    a=b
    a=a%b
    b=a
a=int(input("Enter the first number"))
b=int(input("Enter the second number"))
print(def(a,b))
