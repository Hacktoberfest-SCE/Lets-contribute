#include<stdio.h>
// #include<conio.h>
#include<malloc.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *next;
}*head,*temp;


void display()
{
    printf("\nUpdated link list is:\t");
    temp=head;
    while(temp!=NULL)
    {
        printf("%d\t",temp->info);
        temp=temp->next;
    }
}

void insertatbeg(int item){
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->info=item;
	if(head==NULL){
		newnode->next=NULL;
		head=newnode;
	}
	else{
	newnode->next=head;
	head=newnode;
	}
	display();
}

void insertatend(int item)
{
	struct node*newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->info=item;
	newnode->next=NULL;
	if(head==NULL){
	head=newnode;
	}
	else{
		temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=newnode;
	}
	display();
}

void insertatmid(int item)
{
	int i,pos;
	struct node*newnode;
	temp=head;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->info=item;
	if(head==NULL)
	{
		newnode->next=NULL;
		head=newnode;
	}
	else{
		printf("Enter position you want");
		scanf("%d",&pos);
		for(i=0;i<pos-1;i++)
		{
			temp=temp->next;
		}
			newnode->next=temp->next;
			temp->next=newnode;
	}
	display();


}


void deleteatbeg()
{
	if(head==NULL)
	{
		printf("Can't delete");
	}

	else{
		temp=head;
		head=head->next;
		free(temp);
	}
	display();
}

void deleteatend()
{
	if(head==NULL)
	{
		printf("Can't delete");
	}
	else if(head->next==NULL)
	{
		temp=head;
		head=NULL;
		printf("\n%d is deleted node",temp->info);
		free(temp);
	}
	else
	{
		temp=head;
		while(temp->next->next!=NULL)
		{
			temp=temp->next;
		}
		printf("\n%d is deleted item",temp->next->info);
		free(temp->next);
		temp->next=NULL;
	}
	display();
}

void deleteatmid(){
	int i,pos;
	struct node*p;
	if(head==NULL)
	{
		printf("Can't delete");
	}
	else{
		printf("Enter the position you want:");
		scanf("%d",&pos);
		temp=head;
		for(i=0;i<pos-1;i++)
		{
			temp=temp->next;
		}
		printf("\nDeleted item is:%d",temp->next->info);
		p=temp->next;
		temp->next=temp->next->next;
		free(p);

	}
	display();
}

void search()
{
	int key;
	if(head==NULL)
	{
		printf("Empty list");
	}
	else{
		printf("Enter the item you want to search:");
		scanf("%d",&key);
		temp=head;
		while(temp!=NULL)
		{
			if(temp->info==key)
			{
				printf("Item is present.");
				break;
			}
			temp=temp->next;
		}
			if(temp==NULL)
			{
				printf("Item is not present");
			}

	}
}




void main()
{
	printf("Press:\n1.Insert at beginning.\t2.Insert at End.\t3.Insert in middle.\t4.Delete at beginning.");
	printf("\n5.Delete at End.\t6.Delete in between\t7.Traverse\t8.Search\t9.Exit");
	int choice,item;
	do{
		printf("\nEnter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
        	case 1:
        		printf("Enter item to be inserted");
        		scanf("%d",&item);
	            insertatbeg(item);
	            break;
        	case 2:
        		printf("Enter item to be inserted");
        		scanf("%d",&item);
	            insertatend(item);
	            break;
    		case 3:
    			printf("Enter item to be inserted");
        		scanf("%d",&item);
	            insertatmid(item);
	            break;
        	case 4:
	            deleteatbeg();
	            break;
        	case 5:
	            deleteatend();
	            break;
        	case 6:
	            deleteatmid();
	            break;
	        case 7:
	        	display();
	        	break;
	        case 8:
	        	search();
	        	break;
	        case 9:
	        	exit(0);
	        	break;
            default:
            	printf("Invalid input");

		}
	}while(choice<10);
}
