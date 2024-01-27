#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
 struct node *newnode;
 struct node*temp=NULL;
 struct node* start=NULL;
  struct node *prev=NULL;
 
 void create_list()
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
}
 
 
void insert_at_first()
{
     newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter data you want to add at beginning");
    scanf("%d",&newnode->data);
      newnode->next=NULL;
    if(start==NULL)
    {
         start=newnode;
         temp=newnode;
    }
    else
    {
        newnode->next=start;
        start=newnode;
    }

}

void insert_at_last()
{
	   newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter data you want to add at end");
    scanf("%d",&newnode->data);
      newnode->next=NULL;
     if(start==NULL)
     {
        start=newnode;
        temp=newnode;
     }
     else
     {
    temp=start;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
     temp->next=newnode;
    }
}

void insert_at_sepcific_pos()
{
	int pos;
	int i=1;
	 newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter data you want to add");
    scanf("%d",&newnode->data);
      newnode->next=NULL;

    printf("Enter the position at which you want to add data ");
    scanf("%d",&pos);
     temp=start;
    while(i<pos-1)
    {
        temp=temp->next;
        i++;
    }

    newnode->next=temp->next;
    temp->next=newnode;
}

void display()
{
	temp=start;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        printf(" ");
        temp=temp->next;
    }
}

void delete_at_first()
{
	  start=start->next;
}

void delete_at_last()
{
	 temp=start;
     while(temp->next!=NULL)
     {
     	prev=temp;
     	temp=temp->next;
	 }
	 
	 prev->next=NULL;
	 free(temp);
   
}

void delete_at_specific_pos()
{ 
    struct node *one=NULL;
	int pos;
	int i=1;
	 printf("\nEnter the position from which you want to delete data ");
    scanf("%d",&pos);
     temp=start;
    while(i<pos-1)
    {
        temp=temp->next;
        i++;
    }

    one=temp->next;
    temp->next=one->next;
    free(one);
}


main()
{
	int con=1;
	int choice;
    
   while(con)
  {
	printf("Enter the operation you want to perform\n");
	printf("1. Creation\n");
	printf("2. Insertion at beginning\n");
	printf("3. Insertion at last\n");
    printf("4. Insertion at specific position\n");
    printf("5. Deletion from beginning\n");
    printf("6. Deletion from last\n");
    printf("7. Deletion from specific position\n");
    printf("8. Display\n");
    scanf("%d",&choice);
      switch(choice)
      {
      	case 1:
      	create_list();
		break;
		
		case 2:
		insert_at_first();
		break;
		
		case 3:
		insert_at_last();
		break;
		
		case 4:
		insert_at_sepcific_pos();
		break;
		
		case 5:
		delete_at_first();
		break;
		
		case 6:
		delete_at_last();
		break;
		
		case 7:
		delete_at_specific_pos();
		break;
		
		case 8:
		display();
		break;
	  }
    
    printf("Do you want to perform some more operations 1/0: ");
    scanf("%d",&con);
   }
}
