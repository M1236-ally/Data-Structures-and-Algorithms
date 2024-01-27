#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *prev;
    struct node *next;
};

    struct node *newnode;
    struct node *temp=NULL;
    struct node *start=NULL;
 
 void create_list()
 {
     int choice=1;
    while(choice)
   {
     newnode=(struct node*)malloc(sizeof(struct node));
     printf("Enter data");
     scanf("%d",&newnode->data);
     newnode->prev=NULL;
     newnode->next=NULL;

      if(start==NULL)
      {
        start=newnode;
        temp=newnode;
      }
      else
      {
        temp->next=newnode;
        newnode->prev=temp;
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
      newnode->prev=NULL;
      newnode->next=NULL;
    if(start==NULL)
    {
         start=newnode;
         temp=newnode;
    }
    else
    {
        start->prev=newnode;
        newnode->next=start;
        start=newnode;
    }

}

void insert_at_last()
{
	  newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter data you want to add at last");
    scanf("%d",&newnode->data);
      newnode->prev=NULL;
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
        newnode->prev=temp;
        // temp=newnode;
    }
}

void insert_at_sepcific_pos()
{
	int pos;
	int i=1;
	newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter data you want to add");
    scanf("%d",&newnode->data);

   printf("\n Enter the postion at which your need your data to be inserted: ");
    scanf("%d",&pos);
      newnode->prev=NULL;
      newnode->next=NULL;
      temp=start;

    while(i<pos-1)
    {
        temp=temp->next;
        i++;
    }

    newnode->next=temp->next;
    temp->next=newnode;
    newnode->prev=temp;

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
	  temp=start;
       start=temp->next;
       start->prev=NULL;
       free(temp);
}

void delete_at_last()
{
	 struct node *tail=NULL;
	  tail=temp;
       temp->prev->next=NULL;
       tail=tail->prev;
       free(temp);
   
}

void delete_at_specific_pos()
{ 
   int pos;
   int i=1;
   printf("\n Enter the postion from which you need your data to be deleted: ");
    scanf("%d",&pos);

      temp=start;

    while(i<pos)
    {
        temp=temp->next;
        i++;
    }

   temp->prev->next=temp->next;
   temp->next->prev=temp->prev;
   free(temp);
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
