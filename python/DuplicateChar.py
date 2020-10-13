# This code prints the duplicate characters from the given string

string = input("Enter the string") 
   
print("Duplicate characters in a given string: ");  
#Counts each character present in the string  
for i in range(0, len(string)):  
    count = 1;  
    for j in range(i+1, len(string)):  
        if(string[i] == string[j] and string[i] != ' '):  
            count = count + 1;  
            #Set string[j] to 0 to avoid printing visited character  
            string = string[:j] + '0' + string[j+1:];  
   
    #A character is considered as duplicate if count is greater than 1  
    if(count > 1 and string[i] != '0'):  
        print(string[i]);  
