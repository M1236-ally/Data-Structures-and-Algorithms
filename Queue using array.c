#include<stdio.h>

int front=-1;
int rear=-1;
int n=20;
int queue[20];

void front_val()
{
	printf("Element at front %d \n",queue[front]);
}

void enqueue(int x)
{
	if(rear==n-1)
	{
		printf("Queue is full\n");
	}
	else if(front==-1 && rear==-1)
	{
		front=rear=0;
		queue[rear]=x;
	}
	else
	{
		rear++;
		queue[rear]=x;
	}
}

void dequeue()
{
	if(front==-1 || rear==-1)
	{
		printf("Queue is empty \n");
	}
	else if(front==rear)
	{
		printf("Element is %d \n",queue[front]);
		front=-1;
		rear=-1;
	}
	else
	{
		printf("Element dequeued is %d \n",queue[front]);
		front++;
	}
}

void display()
{
	int i;
	for(i=front;i<=rear;i++)
	{
		printf("%d",queue[i]);
		printf(" ");
	}
}
main()
{
   int choice;
   int data;
   int con=1;
   int quit=1;


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
        front_val();
        break;

      case 4:
        display();
        break;
    }

   printf("Do you want to perform some operations 1/0:");
   scanf("%d",&con);
   }	
}
