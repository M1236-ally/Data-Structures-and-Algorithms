#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int size;//this will store the input of the user
int** graph; //2d array

int* visited; // 1d array


void initializeGraph(int n) {
    int i,j;
    graph = (int**) malloc( n * sizeof(int*));
    for( i= 0 ;i<n;i++){
        graph[i] = (int*) malloc(n* sizeof(int));
    }

    for( i =0 ;i< n;i++){
        for( j=0 ;j< n ;j++){
            graph[i][j]= 0;
        }
    }

    visited= (int*) malloc(n* sizeof(int));
    for( i =0 ;i< n;i++){
        visited[i] = 0;
    }
}


void createNodes(){
    int n,i,j;
    printf("Enter the number of nodes you want to add in the graph : ");
    scanf("%d",&n);
    size = n;
    initializeGraph(size);

    printf("Choose which nodes are connected!\n For connected nodes , enter 1 else 0 : \n");
    for( i=0 ;i<n ;i++){

        for( j =0 ;j<n ;j++){

            int v;
            if(graph[i][j] == 0){

                printf("Is node %d connected to node %d:" , i ,j);
                scanf("%d", &v);
                graph[i][j] = v;
                graph[j][i] = v;
            }
        }

    }
}


/*-----------Implementing queue-------------*/
struct queue {
    int size;
    int front;
    int rear;
    int *arr;
};
typedef struct queue Queue;

bool isEmpty(Queue *q){
    return (q->front == -1 || q->front > q->rear);
}

bool isFull(Queue *q){
    return q->rear == q->size -1;
}

void enq(Queue *q , int data){
    if(isFull(q)){
        return ;
    }

    if(q->rear ==-1) q->front++;

    q->rear ++;
    q->arr[q->rear] = data;

}
int deq(Queue *q){
    if(isEmpty(q)){
        return -1;
    }
    else{
        q->front++;
        return q->arr[q->front-1];
    }
}


bool isVisited(Queue* q , int data){
    int i;
    for ( i = q->front; i<= q->rear ;i++){
        if(q->arr[i] == data) return true;
    }
    return false;
}

void printQ(Queue *q){
    int i;
    if(isEmpty(q)) {
        printf("The queue is empty\n");
        return;
    }
    printf("\nBFS Traversal of the graph is : ");
    for ( i = q->front ; i<= q->rear ;i++){
        printf("%d " , q->arr[i]);
    }
    printf("\n");
}

/* -----Queue Implementation ends--------*/


/*------Functions For traversal-------*/
void printGraph() {
   int i, j;
   printf("\nAdjacency Matrix of graph is :\n");
   for (i = 0; i < size; i++) {
       for (j = 0; j < size; j++) {
           printf("%d ", graph[i][j]);
       }
       printf("\n");
   }
}

void DFS(int i){

    int j;

    visited[i] = 1;
    printf("%d ",i);

    for( j =0 ;j< size ;j++){
        if(graph[i][j]==1 && !visited[j]){
            visited[j] = 1;
            DFS(j);
        }
    }
}

void BFS(int i){

    //initializing the exploration queue and visited queue.
    Queue eq,v;
    eq.front = eq.rear = -1;
    v.front = v.rear = -1;

    eq.size = size;
    v.size = size;

    eq.arr = (int*)malloc(eq.size * sizeof(int));
    v.arr = (int*)malloc(v.size * sizeof(int));

    enq(&v , i);
    enq(&eq , i);

    while(!isEmpty(&eq)){
    	int u,j;
         u = deq(&eq);

        for( j =0 ;j< size ;j++){
            if(graph[u][j] == 1 &&  !isVisited(&v,j)){
                enq(&v , j);
                enq(&eq , j);
            }
        }
    }

    printQ(&v);

}


/*------Functions For traversal End-------*/

int main() {

    createNodes();

    printGraph();

    printf("\nDFS traversal of the graph is : ");
    DFS(0);
    BFS(1);

   return 0;
}

