#First Pull Request
#This Code will return the reverse of an integer
no = int(input("Enter a Number : "))    
reverse = 0    
while(no > 0) :    
    remainder  = no % 10    
    reverse = (reverse * 10) + remainder  
    no = no // 10    #To get the truncated value
print("Number reversed is :",reverse)
#output
#Enter a Number : 123787
#Number reversed is : 787321
