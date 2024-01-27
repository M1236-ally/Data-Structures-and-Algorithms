#include<stdio.h>
#include<stdlib.h>


struct node{
	int data;
	struct node *next;
	struct node *prev;
};


main()
{
	struct node *newnode=NULL;
	struct node *start=NULL;
	int  choice=1;
	while(choice)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter data");
		scanf("%d",&newnode->data);
		
		if(start==NULL)
		{
			start=newnode;
			temp=newnode;
			newnode->next=start;
			newnode->prev=start;
		}
		else
		{
			
		}
	}
}
