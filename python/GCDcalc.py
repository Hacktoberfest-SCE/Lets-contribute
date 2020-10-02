#Importing math to make the calculation a cakewalk
import math

#Program will run as long as this is true
prog = True

#This function will take user input at end of each operation to decide if code will be run again or program will be terminated
def YorN():
    global prog
    ans = str(input("\nContinue? (Y or N) ").upper())
    while ans not in ("N", "Y"):
        ans = str(input("\nUnrecognized input! Please enter Y to continue or N to quit: ").upper())
        continue
    if ans == "Y":
        prog = True
    elif ans == "N":
        prog = False
        
#Main body
print("\nWelcome to the GCD Calculator!")

while prog:
    uInput = input("\n---" + "Type " + "START " + "to begin or type " + "QUIT " + "to exit program: ").upper() #Asking user whether to start or quit the program
    
    #This part of the program does the actual calculation
    if uInput == "START":    
        try:
            n1 = int(input("\nPlease enter the first number: ")) #Take first number
            n2 = int(input("\nPlease enter the second number: ")) #Take second number

            sol = math.gcd(n1, n2)

            print("\nThe GCD of", n1, "and", n2, "is:", sol) #Prints the GCD

            YorN() #To check if user wants to continue

        except:
            print("\nSomething went wrong! Please make sure that inputs are valid.") #This except block deals with errors and invalid inputs
            YorN()

    elif uInput == "QUIT": #To terminate program on user's request
        break

    else:
        print("\nUnrecognized input! Please enter either START or QUIT.") #This is incase user does not enter START or QUIT at the beginning            
