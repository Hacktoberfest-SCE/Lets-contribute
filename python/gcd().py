# python code to demonstrate gcd()
# method to compute gcd using recursion
def gcd(a,b):
  if(b==0):
    return a
  else:
    return gcd(b,a%b)
a = int(input("enter first number:"))
b = int(input("enter second number:"))
GCD = gcd(a,b)
print("the gcd of",a,"and",b,"is:")
print(GCD)
