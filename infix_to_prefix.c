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
	int j;
	char s[20];
	int count=0;
	int temp;
       for(i=0,j=size-1;i<j;i++,j--)
	  {

			temp=e[i];
			e[i]=e[j];
			e[j]=temp;
	  }
	  
	  for(i=0;i<size;i++)
	  {
	  	if(e[i]=='(')
	  	   e[i]=')';
	  	else if(e[i]==')')
	  	  e[i]='(';
	  }
	  
	  
	  printf("Reversed %s \n",e);
    char a[20];
    i=0;
	j=0;
	while(i<size)
	{
		if(isalnum(e[i]))
		{
		   s[j]=e[i];
		   j++;
	    }
		else if(e[i]=='(')  //If ( is encountered, push onto stack
		  push(e[i]);
		else if(e[i]==')') //If ) is encountered 
		{
			while((x=pop())!='(') 
			{
			   s[j]=x;
			   j++;
		    }
		}
		else
		{
			while(top!=-1 && priority(stack[top])>=priority(e[i]))
			{
			  s[j]=pop();
			   j++;
		    }
			push(e[i]);
		}
        i++;
	}
	
	while(top!=-1)
	{
		s[j]=pop();
		j++;
	}
	
     
	printf("Prefix expression is: ");
     int k;
      for(i=0,k=j-1;i<k;i++,k--)
	  {

			temp=s[i];
			s[i]=s[k];
			s[k]=temp;
	  }
	  
	   for(i=0;i<j;i++)
	 {
	 	printf("%c",s[i]);
	 }
	  
	return 0;
}
