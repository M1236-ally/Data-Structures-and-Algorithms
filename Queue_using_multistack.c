//Use of multistack to implement queue
#include<stdio.h>

int s1[20];
int s2[20];
int top1=-1;
int top2=-1;
int count=0;
int n=20;

void push1(int x)
{
	if(top1==n-1)
	{
		printf("Overflow");
	}
	top1++;
	s1[top1]=x;
	
}

int pop1()
{
	return(s1[top1--]);
}

int pop2()
{
	return(s2[top2--]);
}

void push2(int x)
{
	if(top2==n-1)
	{
		printf("Overflow");
	}
	top2++;
	s2[top2]=x;
	
}

void enqueue(int x)
{
	push1(x);
	count++;
}

void dequeue()
{
	int i;
	int a,b;
	for(i=0;i<count;i++)
	{
		a=pop1();
		push2(a);
	}
	b=pop2();
	printf("%d",b);
	count--;
    for(i=0;i<=count;i++)
    {
        push1(pop2());
    }
}

void display()
{
    int i;
    for(i=0;i<=top1;i++)
    {
        printf("%d",s1[i]);
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
     printf("3.Display\n");
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
      	display();
      	break;
    }

   printf("Do you want to perform some operations 1/0:");
   scanf("%d",&con);
   }	

}
