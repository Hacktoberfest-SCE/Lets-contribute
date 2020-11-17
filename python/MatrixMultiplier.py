#Importing NumPy to make the calculation a cakewalk
import numpy as np

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
print("\nWelcome to the matrix multiplier!")

while prog:
    m1 = [] #This stores the rows of 1st matrix as nested list
    m2 = [] #This stores the rows of 2nd matrix as nested list

    uInput = input("\n---" + "Type " + "START " + "to begin or type " + "QUIT " + "to exit program: ").upper() #Asking user whether to start or quit the program

    #This part of the program does the actual calculation
    if uInput == "START":
        try:
            n1 = int(input("\nPlease enter the number of rows in first matrix: ")) #This governs number of rows of 1st matrix
            n2 = int(input("\nPlease enter the number of rows in second matrix: ")) #This governs number of rows of 2nd matrix

            print("\nPlease enter the values of first matrix row-by-row: ") #Taking rows of 1st matrix and appending them to m1
            for i in range(n1):
                m1.append(list(map(float, input().split())))

            print("\nPlease enter the values of second matrix row-by-row: ") #Taking rows of 2nd matrix and appending them to m2
            for i in range(n2):
                m2.append(list(map(float, input().split())))

            m1 = np.array(m1) #Converts 1st matrix into numpy array
            m2 = np.array(m2) #Converts 2nd matrix into numpy array

            sol = np.dot(m1, m2) #Calculating matrix product using numpy.dot()
        
            print("\nThe matrix resulting from the multiplication of matrices given is:\n ") #Prints the matrix product
            print(sol)

            YorN() #To check if user wants to continue

        except:
            print("\nSomething went wrong! Please make sure that the number of rows of first matrix is same as number of columns of second matrix.") #This except block deals with errors and invalid inputs
            YorN()

    elif uInput == "QUIT": #To terminate program on user's request
        break

    else:
        print("\nUnrecognized input! Please enter either START or QUIT.") #This is incase user does not enter START or QUIT at the beginning
