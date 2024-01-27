#include <stdio.h>

int main()
{
    int n;
    int a[100];
    int i;
    int ser;
    int count=0;
    printf("Enter size of array:");
    scanf("%d" ,&n);
    printf("\n");
    
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++){
        scanf("%d" ,&a[i]);
    }
    
    printf("Array Elements are:");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    
    printf("\nEnter the element you want to search ");
    scanf("%d",&ser);
    
    for(i=0;i<n;i++){
        if(a[i] == ser){
            printf("\nElement found at index: %d ",i);
            printf("\n");
            count++;
        }
    }
    
    if(count==0){
        printf("Element not found");
    }
    else
    {
    	printf("Number of times element occurred in array: %d",count);
    	  printf("\n");
	}

    return 0;
}
