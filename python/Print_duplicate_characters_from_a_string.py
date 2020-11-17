# initializing string
string = int(input('Enter the word'))
# initializing a list to append all the duplicate characters
char = []
# checking whether the character have a duplicate or not
# str.count(char) returns the frequency of a char in the str
for char in string:
   if string.count(char) > 1:
       if char not in duplicates:
# appending to the list if it's already not present
           duplicates.append(char)
print(*duplicates)
