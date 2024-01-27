#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

  

  main()
  {
  struct node *newnode;
    struct node*temp=NULL;
    struct node* start=NULL;
    int choice=1;
    int count=0;
    while(choice)
    {
       newnode=(struct node*)malloc(sizeof(struct node));
       printf("Enter data");
       scanf("%d",&newnode->data);
       newnode->next=NULL;
       
      if(start==NULL)
      {
        start=newnode;
        temp=start;
      }
      else
      {
          temp->next=newnode;
          temp=newnode;
      }

       printf("Do you want to enter more nodes: 1/0");
       scanf("%d",&choice);
    }

     temp=start;
    while(temp!=NULL)
    {
    	count++;
    	temp=temp->start;
	}
	
	
	printf("Length of the linked list %d",count);
}
