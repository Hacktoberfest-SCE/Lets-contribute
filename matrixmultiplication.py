# Program to multiply two matrices using nested loops 
  
# take a 2x2 matrix 
A = [[1,2], 
    [3,4]]
  
# take a 2x2 matrix     
B = [[5, 6], 
    [0,7]] 
      
result = [[0, 0], 
         [0, 0]] 
  
# iterating by row of A 
for i in range(len(A)): 
  
    # iterating by coloum by B  
    for j in range(len(B[0])): 
  
        # iterating by rows of B 
        for k in range(len(B)): 
            result[i][j] += A[i][k] * B[k][j] 
  
for r in result: 
    print(r)
