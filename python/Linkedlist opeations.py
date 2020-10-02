#this program implements the linkedin opeations such as add from Fronth,back middle and delete from Fronth,back middle 
class Node:
    def __init__(self,data):
        self.next=None
        self.data=data
class linkedlist:
    def __init__(self):
        self.head=None
    def prepend(self,data):
        new_node=Node(data)
        if self.head is None:
            self.head=new_node
            return 
        else:
            new_node.next=self.head
            self.head=new_node
    def append(self,data):
        new_node=Node(data)
        if self.head is None:
            self.head=new_node
            return
        else:
            cur=self.head
            while cur.next:
                cur=cur.next
            cur.next=new_node
    def print(self):
        cur=self.head
        while cur:
            print(cur.data,end=' ')
            cur=cur.next
            
    def middle(self,key,data):
        cur=self.head
        while cur:
            if cur.next is None and cur.data==key:
                self.append(data)
                return
            elif cur.data==key:
                new=Node(data)
                nxt=cur.next
                cur.next=new
                new.next=nxt
            cur=cur.next
    def delete(self,key):
        cur=self.head
        if cur and cur.data==key:
            self.head=cur.next
            cur=None
            return
        else:
            prev=None
            while cur and cur.data!=key:
                prev=cur
                cur=cur.next
            if cur is None:
                return
            prev.next=cur.next
            cur=None
            
    def delNode(self, k):
    # Code here
        cur=self.head
        c=1
        if cur and c==k:
            head=None
            return
        else:
            prev=None
            while cur and c!=k:
                prev=cur
                cur=cur.next
                c+=1
            if cur is None:
                return
            prev.next=cur.next
            cur=None

 #------main function-----#   
ll=linkedlist() #creation of object
ll.append('mon')
ll.append('tue')
ll.append(10)
ll.append('wed')
ll.prepend('thr')
ll.prepend(5)
ll.append('sat')
ll.middle('',5)
ll.delete('mon')
ll.print()
ll.delNode('mon')        
