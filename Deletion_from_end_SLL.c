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
    struct node* prev=NULL;
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
     	prev=temp;
     	temp=temp->next;
	 }
	 
	 prev->next=NULL;
	 free(temp);
   
    temp=start;
    printf("\nLinked List after removing data from the end: ");
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        printf(" ");
        temp=temp->next;
    }
}
