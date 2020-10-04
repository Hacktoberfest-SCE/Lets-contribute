public class LinkedLists {
    Node head;

    public class Node{
        int data;
        Node next;
    }

    public void insert(int data){
        Node new_node = new Node();
        new_node.data = data;
        new_node.next = null;

        if(head == null){
             // Create new head node if no node present
            head = new_node;
        } else {
            // Traverse through the list if not null 
            Node n = head;  
            while(n.next != null){
                n = n.next;
            }
            // If n.next == null, we add new node at the end.
            n.next = new_node;
        }
    }

    public void insertAtStart(int data){
        Node new_node = new Node();
        new_node.data = data;
        
        //Change the next pointer to head and make the new node head.
        new_node.next = head;
        head = new_node;
    }

    public void insertAt(int index, int data){
        Node new_node = new Node();
        new_node.data = data;

        if(index == 0){
            insertAtStart(data);
        }
        else {
        Node n = head;
        // Traverse till the index value
        for(int i = 0; i < index - 1; i++){
            n = n.next;
        }
        // The next pointer of new node points to the next node
        new_node.next = n.next;
        // New node is pointed by the previous node
        n.next = new_node;
        }
    }

    // 
    public void deleteAt(int index){
        if(index == 0){
            head = head.next;
        } else {
            Node n = head;
            Node n1 = null;
            for(int i = 0 ; i < index-1; i++){
                n = n.next;
            }
            n1 = n.next; // It refers to the next node after the the index node || the node we want ot delete.
            n.next = n1.next; // Now we assign the address of next node to the index node.
            System.out.println("The deleted node is " + n1.data);
        }
    }
    public void Size(){
        Node n = head;
        int count = 0;

        while(n != null){
            count++;
            n = n.next;
        }
        System.out.println();
        System.out.println("The size of list is " + count);
    }

    public void show(){
        Node n = head;
        while(n.next != null){
            System.out.print(n.data + " -> ");
            n = n.next;
        }
        // The loop does not print the data of node having null in next so we manually print it. 
        System.out.print(n.data);
    }
    public static void main(String[] args) {
        LinkedLists list = new LinkedLists();
        list.insert(5);
        list.insert(34);
        list.insertAtStart(20);
        list.insertAt(2,18);
        list.insertAt(3,58);
        list.deleteAt(2);

        list.show();
        list.Size();
    }
}