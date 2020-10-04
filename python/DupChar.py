#finding duplicate characters
from collections import Counter 
  
def find_dup_char(input): 
    WC = Counter(input) 
    j = -1
    for i in WC.values(): 
        j = j + 1
        if( i > 1 ): 
            print WC.keys()[j], 
  
# Driver program 
if __name__ == "__main__": 
    input = 'nothing'
    find_dup_char(input) 
