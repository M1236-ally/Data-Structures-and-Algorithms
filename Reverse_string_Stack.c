#include<stdio.h>


char stack[50];
int top=0;
int n=5;

void push(char x)
{     
	  stack[top]=x;
	  	  top++;
}


void pop()
{
	int j=0;
	for(j=0;j<n;j++)
	{
	  printf("%c",stack[top]);
	  printf(" ");
	  top--;
    }
} 



main()
{
	int i;
	char a[10];
	printf("Enter the string: ");
	for(i=0;i<n;i++)
	{
		scanf("%c",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
	   push(a[i]);
    }
    
    printf("Reversed string is: ");
    pop();
	return 0;
}
