#include<stdio.h>

int top=-1;
int n=10;
int stack[50];

void push(int x)
{ 
    if(top==n-1)
    {
        printf("Stack is full");
    }
    top++;
    stack[top]=x;
}

void pop()
{   
    if(top==-1)
    {
        printf("Underflow");
    }
    int item;
    item=stack[top];
    top--;
    printf("Deleted item is %d \n",item);
}


void peek()
{
    printf("The peek element of stack is %d \n",stack[top]);
}

void display()
{
    for(int i=top;i>=0;i--)
    {
        printf("%d",stack[i]);
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

   printf("Do you want to perform some operations 1/0:");
   scanf("%d",&con);
   }

  
}
