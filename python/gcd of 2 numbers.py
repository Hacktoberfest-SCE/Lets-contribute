# python code to demonstrate gcd() of 2 numbers
# method to compute gcd using recursion
def gcd(a,b):
  if(b==0):
    return a
  else:
    return gcd(b,a%b)
a = int(input("Enter first number:"))
b = int(input("Enter second number:"))
GCD = gcd(a,b)
print("The gcd of",a,"and",b,"is:")
print(GCD)
