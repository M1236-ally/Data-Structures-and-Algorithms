#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

void readGraph(struct node *adj[],int no_v)
{
	struct node *newnode;
	int k,data;
	int i,j;
	for(i=1;i<=no_v;i++)
	{
		struct node *last=NULL;
		printf("The number of adjacent vertices to %d: ",i);
		scanf("%d",&k);
		for(j=1;j<=k;j++)
		{
			newnode=(struct node*)malloc(sizeof(struct node));
			printf("Enter the %d neighbour of %d:- ",j,i);
			scanf("%d",&data);
			newnode->data=data;
			newnode->next=NULL;
			if(adj[i]==NULL)
			{
				adj[i]=newnode;
			}
			else
			{
				last->next=newnode;
			}
			last=newnode;
		}
	}
}

void printGraph(struct node *adj[],int no_v)
{
	int i;
	struct node *temp;
	for(i=1;i<=no_v;i++)
	{
		temp=adj[i];
		printf("Vertices adjacent to %d:- ",i);
		while(temp!=NULL)
		{
			printf("%d",temp->data);
			printf(" ");
			temp=temp->next;
		}
		
		printf("\n");
	}
}
main()
{
	int no_v;
	printf("Enter the number of vertices in the graph: ");
	scanf("%d",&no_v);
	struct node *adj[no_v];
	int i;
	for(i=1;i<=no_v;i++)
	{
		adj[i]=NULL;
	}
	
	readGraph(adj,no_v);
	printGraph(adj,no_v);
}
