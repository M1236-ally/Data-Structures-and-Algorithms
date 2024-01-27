#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

 struct node *newnode;
 struct node*temp=NULL;
 struct node* start=NULL;
 
 void loop_list()
 {
 	int choice=1;
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
    
    temp->next=start->next;
    
    struct node *slow=start;
	struct node *fast=start;
	int flag=0;
	  while(slow && fast && fast->next!=NULL)
	 {
   		 slow=slow->next;
		 fast=fast->next->next;
		 if(slow==fast)
		 {
		 	printf("There is a loop in linked list");
		 	flag=1;
		 	break;
		 }
	 }
	 if(flag==0)
	 {
	 	printf("There is no loop");
	 }
    }
   


int main()
{
	loop_list();
	
}
