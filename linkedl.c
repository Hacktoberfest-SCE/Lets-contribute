#include <stdio.h>
#include <stdlib.h>
struct node* root;
struct node{
    int data;
    struct node* link;
};

void add_at_last(){
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter data:\n");
    scanf("%d", &temp->data);
    temp->link=NULL;
    if(root==NULL){
        root=temp;
    }
    else{
        struct node* p;
        p=root;
        while(p->link!=NULL){
            p=p->link;
        }
        p->link=temp;
    }
}
void add_at_beginning(){
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data:\n");
    scanf("%d", &temp->data);
    temp->link=NULL;
    if(root==NULL){
        root=temp;
    }
    else{
        temp->link=root;
        root=temp;
    }
}
void delete_from_front(){
    struct node* temp;
    int loc;
    printf("Enter the location:\n");
    scanf("%d", &loc);
    if(loc>length()){
        printf("Invalid input\n");
    }
    else if(loc==1){
        temp=root;
        root=temp->link;
        temp->link=0;
        free(temp);
    }
    else{
        struct node* p;
        struct node* q;
        int i;
        while(i<loc){
            p=p->link;
            i++;
        }
        q=p->link;
        p->link=q->link;
        q->link=NULL;
        free(q);
    }
}
void delete_from_back(){
  struct node* temp;
    temp=root;
    int loc, len=0, m=1;
    printf("Enter the location:\n");
    scanf("%d", &loc);
    while(temp!=NULL){
        len++;
        temp=temp->link;
    }
    if(loc>len){
        printf("Enter a valid position\n");
    }
    else{
    int n=(len-loc);
    struct node* p;
    struct node* q;
    p=root;
    while(m<n){
        m++;
        p=p->link;
    }
    q=p->link;
    p->link=q->link;
    q->link=NULL;
    }
}
int main(){
  int ans;
  while(1){
    printf("Enter your choice:\n");
    scanf("%d\n", &ans);
    if(ans==1){
       add_at_last()
    }
    else if(ans==2){
        add_at_beginning();
        }
    else if(ans==3){
        delete_from_front();
         }
    else if(ans==4){
        delete_from_back();
        }
  return 0;
  }
