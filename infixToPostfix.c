#include<stdio.h>

char stack[20];
int top=-1;

void push(char x)
{
	stack[++top]=x;
}

char pop()
{
	if(top==-1)
	{
		return -1;
	}
	else
	{
		return stack[top--];
	}
}

int priority(char x)
{
	if(x=='(')
	  return 0;
	else if(x=='+' || x=='-')
	  return 1;
	else if(x=='*' || x=='/')
	  return 2;
}

int main()
{
	char e[20],x;
	int size;
	printf("Enter the length of the expression: ");
	scanf("%d",&size);
	printf("Enter the expression: ");
	scanf("%s",e);
	int i=0;
	while(i!=size)
	{
		if(isalnum(e[i]))
		   printf("%c",e[i]);
		else if(e[i]=='(')  //If ( is encountered, push onto stack
		  push(e[i]);
		else if(e[i]==')') //If ) is encountered 
		{
			while((x=pop())!='(') //pop until ( is found
			  printf("%c",x);  //printing popped element
		}
		else
		{
			while(priority(stack[top])>=priority(e[i]))  //if priority of element on top of stack is greater then the incoming operator
			   printf("%c",pop());
			push(e[i]);
		}
        i++;
	}
	while(top!=-1)
	{
		printf("%c",pop());
	}
	return 0;
}
