CODE OF QUEUE DATA STRUCTURES IN PYTHON
#initialising a queue
queue=[]
#adding elements to the queue 
queue.append('a')
queue.append('b')
queue.append('c')
print("Initial queue")
print(queue)
#removing elements from the queue
print("\nElements dequeued from queue")
print(queue.pop(0))
print(queue.pop(0))
print(queue.pop(0))
print("\nQueue after removing elements")
print(queue)
#Uncommenting print(queue.pop(0))
#will raise and IndexError
#as the queue is now empty
