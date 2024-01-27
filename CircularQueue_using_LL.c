//Circular Queue using linked list
#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};

struct node *front=NULL;
struct node *rear=NULL;
struct node *temp=NULL;

void enqueue(int x)
{
	struct node *newnode=NULL;
	newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
	newnode->next=NULL;
	
	if(front==NULL || rear==NULL)
	{
		front=newnode;
		rear=newnode;
		rear->next=front;
	}
	else
	{
		rear->next=newnode;
		rear=newnode;
		rear->next=front;
	}
	
}

void dequeue()
{
	if(front==NULL)
	{
		printf("Underflow");
	}
	else if(front==rear)
	{
	    temp=front;
		front=NULL;
		rear=NULL;
		free(temp);
	}
	else
	{
		temp=front;
		front=front->next;
		rear->next=front;
		free(temp);
	}
}

void peek()
{
	printf("Data in front of queue %d \n",front->data);
}

void display()
{
	temp=front;
	while(temp->next!=front)
	{
		printf("%d",temp->data);
		printf(" ");
		temp=temp->next;
	}
		printf("%d",temp->data);
	
}

main()
{
   int choice;
   int data;
   int con=1;

   while(con)
   {
     printf("Enter the operation you want to execute:\n");
     printf("1.Enqueue\n");
     printf("2.Dequeue\n");
     printf("3.Front\n");
     printf("4.Display\n");
     scanf("%d",&choice);

    switch(choice)
   {
      case 1:
       printf("Enter the value to be put in queue");
       scanf("%d",&data);
       enqueue(data);
       break;
    
      case 2:
        dequeue();
        break;  

      case 3:
        peek();
        break;

      case 4:
        display();
        break;
    }

   printf("Do you want to perform some operations 1/0:");
   scanf("%d",&con);
   }	   	
}
