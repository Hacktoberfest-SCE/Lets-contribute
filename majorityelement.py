# Function to find majority element 
from collections import Counter 
  
def majority(arr): 
  
    # convert array into dictionary 
    freqDict = Counter(arr) 
  
    # traverse dictionary and check majority element 
    size = len(arr) 
    for (key,val) in freqDict.items(): 
         if (val > (size/2)): 
             print(key) 
             return
    print('None') 
  
# Driver program 
if __name__ == "__main__": 
    arr = [3,3,4,2,4,4,2,4,4]  
    majority(arr)
