#include <stdio.h>
#include<stdlib.h>

int main()
{
    int *p;
    int n;
    int i;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    
    p=(int*)malloc(n*sizeof(int));
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
    
    int inp,addNo;
    printf("Do you want to add more numbers: 1/0");
    scanf("%d",&inp);
    printf("Enter the number of elements you want to add: ");
    scanf("%d",&addNo);
    printf("Enter the elements");
    for(i=n;i<addNo+n;i++)
    {
        scanf("%d",p+i);
    }
    
    if(inp==1)
    {
       p=(int*)realloc(p,addNo);
      for(i=n;i<n+addNo;i++)
      {
        sum=sum+*(p+i);
      }
    
       printf("%d",sum);
    }
    else
    {
      printf("Sum of numbers: %d",sum);  
    }    
    return 0;
}

