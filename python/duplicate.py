#Code to print duplicate char in a string

#importing the required module(counter) for it.
#counter will help us to count the number of time it is repeated
from collections import Counter

#here we are defining a function
def dup_char(x):
    elements = Counter(x)
    return [k for k,v in elements.items() if v>1]

#taking the input from the user
dup_char(input("enter the string: ")    # this wil print the duplicate char
