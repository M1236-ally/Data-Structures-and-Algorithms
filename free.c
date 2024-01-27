#include <stdio.h>
#include<stdlib.h>

int main()
{
    int *p;
    int i,n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    
    p=(int*)calloc(n,sizeof(int));
    printf("Enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    
    for(i=0;i<n;i++)
    {
    	printf("%d",*(p+i));
	}
    
    free(p);
    
    return 0;
}

