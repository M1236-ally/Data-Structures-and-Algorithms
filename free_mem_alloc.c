#include <stdio.h>
#include<stdlib.h>

int main()
{
    int *p;
    int n,i;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    
    p=(int*)calloc(n,sizeof(int));
    printf("Enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    
    int sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+*(p+i);
    }
    
    printf("Sum of numbers: %d",sum);
    
    free(p);
    printf("\n Successfully freed p: ");
 
    return 0;
}

