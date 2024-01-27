#include<stdio.h>

#define max 20
int top=-1;
char stack[max];

void push(char x)
{     
    if(top == max-1)
	{  
          printf("stack overflow");  
    }  
	else 
	{  
		top++;
        stack[top]=x;  
    }  
}


void pop()
{	
	  printf("%c",stack[top]);
	  top--;
	  printf(" ");
} 



int main()
{
	int i,j;
	int len;
	char a[10];
	printf("Enter the length of the string: ");
	scanf("%d",&len);
	printf("Enter the string: ");
	for(i=0;i<=len;i++)
	{
		scanf("%c",&a[i]);
	}
	
	for(i=0;i<=len;i++)
	{
	   push(a[i]);
    }
    
    printf("Reversed string is: ");
    for(j=0;j<=len;j++)
	{
        pop();
    }

}
