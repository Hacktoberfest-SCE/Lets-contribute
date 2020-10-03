#include <stdio.h>
#define MAX 20
#include<stdlib.h>
int queue_array[MAX];
int rear = - 1;
int front = - 1;
void insert()
{
      int add_item;
      if (rear == MAX - 1)
            printf("Queue Overflow \n");
      else
      {
            if (front == - 1)
                  /*If queue is initially empty */
                  front = 0;
            printf("\nEnter element : ");
            scanf("%d", &add_item);
            printf("\n%d is inserted in queue\n",add_item);
            printf("------------------------------\n");
            rear = rear + 1;
            queue_array[rear] = add_item;
      }
}
void delete()
{
      if (front == - 1 || front > rear)
      {
            printf("Queue Underflow \n");
            return ;
      }
      else
      {
            printf("\nElement deleted from queue is : %d\n", queue_array[front]);
            printf("------------------------------\n");
            front = front + 1;
      }
}
void display()
{
      int i;
      if (front == - 1)
            printf("Queue is empty \n");
      else
      {
            printf("\nQueue is : ");
            for (i = front; i <= rear; i++)
                  printf("%d ", queue_array[i]);
            printf("\n------------------------------");
            printf("\n");
      }
}
int main()
{
      printf("Perform operations on queue\n");
      printf("------------------------------\n");
      printf("\tMenu");
      printf("\n------------------------------\n");
      printf("1. Insert element \n");
      printf("2. Delete element \n");
      printf("3. Display queue\n");
      printf("4. Exit\n");
      printf("------------------------------\n");
      int ch;
      while (1)
      {
            printf("Choose operation : ");
            scanf("%d", &ch);
            switch(ch)
            {
                  case 1:
                        insert();
                        break;
                  case 2:
                        delete();
                        break;
                  case 3:
                        display();
                        break;
                  case 4:
                        exit(1);
                  default:
                        printf("Invalid operation \n");
            }
      }
      return 0;
}
