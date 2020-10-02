#take the input n
print('enter a number')
n = int(input())
#define a function fact
def fact(n):
    if n==1 or n==0 :
        return 1
    else:
        return n*fact(n-1)
#store the result in variable res
res = fact(n)
#Print the result
print('Factorial of '+str(n)+' is '+str(res))
