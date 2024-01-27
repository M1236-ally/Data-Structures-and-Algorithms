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
     struct node* one=NULL;
      struct node* two=NULL;
    int t=0;
    int choice=1;
    int ser;
    int flag=0;
    while(choice==1)
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
   
    

    //Printing a linked list
    temp=start;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        printf(" ");
        temp=temp->next;
    }

    temp=start;
    while(temp->next!=NULL)
    {
    	one=temp->next;
    	while(one!=NULL)
    	{
    		t=one->data;
    		one->data=temp->data;
    		temp->data=t;
    		one=one->next;
		}
		
		temp=temp->next;
	}
	
	printf("\n Linked list after reversing: ");
	  temp=start;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        printf(" ");
        temp=temp->next;
    }
}
