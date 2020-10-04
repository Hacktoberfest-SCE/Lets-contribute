* Program to add elements to a linked list from the end,from the beginning and delete from the end and delete from the beginning.*/


#include <stdio.h>
#include <stdlib.h>
struct node{
int data;
struct node* link};
struct node* root;

void append()    /*Function to add a node at the end of the linked list.*/
{
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter the node data: ");
    scanf("%d",&temp->data);
    temp->link=NULL;
    if(root==NULL)
    {
        root=temp;
    }
    else{
        struct node* p;
        p=root;
        while(p->link!=NULL)
        {
            p=p->link;
        }
        p->link=temp;
    }
}

void addatbegin()  /*Function to add a node at the beginning of the linked list*/
{
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter the node data: ");
    scanf("%d",&temp->data);
    temp->link=NULL;
    if(root==NULL)
    {
        root=temp;
    }
    else{
        temp->link=root;
        root=temp;
    }
}


void delete() /*Function to delete a node from the front*/
{
    struct node* temp;
    int loc,i=1;
    printf("Enter the location to be deleted: ");
    scanf("%d",&loc);
    int len=0;
    while(temp!=NULL)
    {
     len++;
     temp=temp->link;
     }
    if(loc>len)
    {
        printf("Invalid Location!\n");

    }
    else if(loc==1)
    {
        temp=root;
        root=temp->link;
        temp->link=NULL;
        free(temp);
    }
    else{
            struct node* p=root,*q;
           int i=1;
          while(i!=loc)
           {
             p=p->link;
             i++;
           }
           q=p->link;
           p->link=q->link;
           q->link=NULL;
           free(q);
    }
}
void delete_from_end() /*Function to delete element from the end of the linked list*/
{
    struct node* temp;
    temp=root;
    int loc, len=0, i=1;
    printf("Enter the location:\n");
    scanf("%d", &loc);
    while(temp!=NULL){
        len++;
        temp=temp->link;
    }
    if(loc>len){
        printf("Location cannot exceed the length of the linked list\n");
    }
    else{
    int pos=(len-loc);
    struct node* p;
    struct node* q;
    p=root;
    while(i<pos){
        i++;
        p=p->link;
    }
    q=p->link;
    p->link=q->link;
    q->link=NULL;
}}
void display()
{
    struct node* temp;
    temp=root;
    if(temp==NULL)
    {
     printf("No nodes exist\n");
    }
    else
    {
        while(temp!=NULL)
       {
      printf("%d->",temp->data);
      temp=temp->link;
      }
    }
    }
    int main()
{
    int ch,res;
    while(1)
    {
        printf("1.Append or add at the end\nn2.Add at the front\n3.Delete from the front\n4.Delete from the end\n5.Display the linked list\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:append();
            break;
             case 2:addatbegin();
            break;
             case 3:delete();
            break;
             case 4:delete_from_end();
            break;
            case 5:display();
            break;

            default: exit(1);
        }

    }




    return 0;
}
 P
