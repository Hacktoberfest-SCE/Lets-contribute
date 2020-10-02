try: #try-except block is to deal with runtime errors (codechef habit :P)
    for _ in range(int(input())): #Acquire test cases without wasting space on extra variables
        x, n = map(float, input().split()) #Take inputs x and x
        print(x**n) #Print result
except:
    pass
