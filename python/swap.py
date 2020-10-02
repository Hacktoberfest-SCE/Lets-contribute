#Program to swap two numbers
#take input of first number
print('Enter the first number')
a = int(input())
#take input of second number
print('Enter the second number')
b = int(input())
print('before swapping ,a = '+str(a)+' and b = '+str(b))
#create a function to swap the numbers
def swap(a,b):
    temp = a
    a = b
    b = temp
    print('after swapping, a = '+str(a)+' and b = '+str(b))
#call the swap function
swap(a,b)
