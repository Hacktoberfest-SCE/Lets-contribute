#program to print fibonacci series
print('enter a number')
n = int(input())

def fib(n):
    #Initialize the first and second term of fibonacci series
    a = 1
    b = 1
    #Initialize 3rd term as 0
    c = 0
    #Iterate over a for loop
    for i in range(n):
        a = b
        b = c
        c = a+b
        #print the series
        print(c, end =' ')
fib(n)

    
