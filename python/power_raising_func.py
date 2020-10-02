# This program takes two inputs places them in pow function to return a no raised with the input power
def pow(x,n) :
    if (n==0):  #special case for which irrespective of value of x answer will remain 1
        return 1
    else:
        return x**n

x = float(input("Enter the base no. : "))
n = int(input("Enter an integer to be raised with : "))
print(pow(x,n))
