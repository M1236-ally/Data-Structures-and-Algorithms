#include<stdio.h>

int MAX_SIZE= 100;

// Function to initialize the adjacency matrix
void zeroMatrix(int matrix[][MAX_SIZE], int size)
{
    int i, j;
    for(i=0;i<size;i++) 
	{
        for(j=0;j<size;j++) 
		{
            matrix[i][j]=0;
        }
    }
}


void addEdge(int matrix[][MAX_SIZE], int u, int v) 
{
    matrix[u][v] = 1;
    matrix[v][u] = 1;
}


void printMatrix(int matrix[][MAX_SIZE],int size)
{
    int i, j;
    for(i=1;i<=size;i++) 
	{
        for(j=1;j<=size;j++)
		{
            printf("%d",matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int matrix[MAX_SIZE][MAX_SIZE];
    int size,i,j;

    printf("Enter the number of vertices in the graph:");
    scanf("%d", &size);

    zeroMatrix(matrix, size);

    int edges;
    printf("Enter the number of edges: ");
    scanf("%d", &edges);

    printf("Enter the edges:\n");
    for(i=1;i<=edges;i++) 
	{
        int u, v;
        scanf("%d",&u);
        scanf("%d",&v);
        addEdge(matrix,u,v);
    }

    printf("Adjacency matrix representation of the graph:\n");
    printMatrix(matrix, size);

    return 0;
}
