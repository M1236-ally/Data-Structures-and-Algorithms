#include<stdio.h>

int front1=-1;
int front2=-1;
int rear1=-1;
int rear2=-1;
int n=20;
int q1[20];
int q2[20];
int count=0;

void enqueue1(int x)
{
	if(rear1==n-1)
	{
		printf("Queue is full\n");
	}
	else if(front1==-1 && rear1==-1)
	{
		front1=rear1=0;
		q1[rear1]=x;
	}
	else
	{
		rear1++;
		q1[rear1]=x;
	}
}


int dequeue1()
{   
    int a;
	a=q1[front1];
	front1++;
	return(a);
}



void enqueue2(int x)
{
	if(rear2==n-1)
	{
		printf("Queue is full\n");
	}
	else if(front2==-1 && rear2==-1)
	{
		front2=rear2=0;
		q2[rear2]=x;
	}
	else
	{
		rear2++;
		q2[rear2]=x;
	}
}

int dequeue2()
{
	int b;
	b=q2[front2];
	front2++;
	return(b);
}

void push(int x)
{
	enqueue1(x);
	count++;
}

void pop()
{    int i;
     int a,b;
	for(i=0;i<count-1;i++)
	{
		a=dequeue1();
		enqueue2(a);
	}
	b=dequeue1();
	printf("Deleted item is %d",b);
	
	for(i=0;i<count-1;i++)
	{
		a=dequeue2();
		enqueue1(a);
	}
}

void display()
{
	int i;
	for(i=front1;i<=rear1;i++)
	{
		printf("%d",q1[i]);
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
     printf("1.Push\n");
     printf("2.Pop\n");
     printf("3.Display\n");
     scanf("%d",&choice);

    switch(choice)
   {
      case 1:
       printf("Enter the value to be put in stack");
       scanf("%d",&data);
       push(data);
       break;
    
      case 2:
        pop();
        break;  

      case 3:
        display();
        break;
    }

   printf("Do you want to perform some operations 1/0:");
   scanf("%d",&con);
   }	
}
