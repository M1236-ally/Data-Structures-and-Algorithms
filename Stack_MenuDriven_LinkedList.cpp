#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};

struct node *top=NULL;
struct node *newnode=NULL;
struct node *temp=NULL;

void push(int x)
{
		newnode=(struct node*)malloc(sizeof(struct node));
	    newnode->data=x;
	    newnode->next=top;
   	    top=newnode;
}

void pop()
{
	struct node *temp=NULL;
	temp=top;
	top=top->next;
	printf("Deleted item is: %d \n",temp->data);
	free(temp);
}

void peek()
{
	printf("Peek element is %d",top->data);
}

void display()
{
	temp=top;
	while(temp!=NULL)
	{
		printf("%d",temp->data);
		printf(" ");
		temp=temp->next;
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
     printf("3.Peek\n");
     printf("4.Display\n");
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
        peek();
        break;

      case 4:
        display();
        break;
    }

   printf("\n Do you want to perform some operations 1/0:");
   scanf("%d",&con);
   }

}
