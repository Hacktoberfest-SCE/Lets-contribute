import math
number = int(input("enter a number:"))
sqrt = math.sqrt(number)
sqrt1 = int(sqrt)
print("square root :",sqrt1)
if sqrt1!=sqrt:
   print("the square root of ",number," is " ,sqrt, " and since the decimal part is truncated, " , sqrt1 , "is returned.")
