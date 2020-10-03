# Python code to demonstrate naive 
# method to compute gcd ( Euclidean algorithm ) 
  
def computeGCD(x, y): 
  
   while(y): 
       x, y = y, x % y 
  
   return x 
  
a = 60
b= 48
  
# prints 12 which is gcd of 2 nos
print ("The gcd of 60 and 48 is : ",end="") 
print (computeGCD(60,48))
