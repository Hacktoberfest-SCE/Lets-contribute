#basic stack implementation 
class stack:
    def __init__(self):
        self.items=[]
    def push(self,item):
        self.items.append(item)
    def pop(self):
        return self.items.pop()
    def print(self):
        return self.items
    def is_empty(self):
        return self.items==[]
    def peek(self):
        if not self.is_empty():
            return self.items[-1]
        
#to perform operations in stack           
st=stack()
st.push(5)
st.push(10)
if not st.is_empty():
    st.pop()
st.print()
