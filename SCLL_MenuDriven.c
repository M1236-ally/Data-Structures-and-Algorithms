#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

    struct node *newnode;
    struct node *tail=NULL;
    struct node* temp=NULL;
    
 void create_list()
 {
  int choice=1;
    while(choice)
   {
     newnode=(struct node*)malloc(sizeof(struct node));
     printf("Enter data");
     scanf("%d",&newnode->data);
     newnode->next=NULL;

      if(tail==NULL)
      {
        tail=newnode;
        tail->next=newnode;
      }
      else
      {
       newnode->next=tail->next;
        tail->next=newnode;
        tail=newnode;
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
   
	 newnode->next=tail->next;
     tail->next=newnode;
}

void insert_at_last()
{
	newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter data you want to add at last");
    scanf("%d",&newnode->data);
       
      newnode->next=tail->next;
      tail->next=newnode;
      tail=newnode;
    
}

void insert_at_sepcific_pos()
{
	int pos;
	int i=1;
	printf("Enter the position at which you want to insert data: ");
     scanf("%d",&pos);
    newnode=(struct node*)malloc(sizeof(struct node));
     printf("\nEnter data you want to add:");
     scanf("%d",&newnode->data);
         temp=tail->next;
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
    temp=tail->next;
    while(temp->next!=tail->next)
    {
        printf("%d",temp->data);
        printf(" ");
        temp=temp->next;
    }
    
    printf("%d",temp->data);
}

void delete_at_first()
{
	  temp=tail->next;
      tail->next=temp->next;
      free(temp);
    
}

void delete_at_last()
{
	struct node *prev=NULL;
     temp=tail->next;
     while(temp->next!=tail->next)
     {
     	prev=temp;
     	temp=temp->next;
	 }
	 prev->next=tail->next;
	 tail=prev;
	 free(temp);
}

void delete_at_specific_pos()
{ 
     struct node *temp1=NULL;
     int pos;
     int i=1;
     printf("Enter position: ");
     scanf("%d",&pos);
     
     temp=tail->next;
     while(i<pos-1)
     {
     	temp=temp->next;
     	i++;
	 }
    
     temp1=temp->next;
     temp->next=temp1->next;
     free(temp1);
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
