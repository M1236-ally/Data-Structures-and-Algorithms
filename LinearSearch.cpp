#include<stdio.h>

main()
{
	int n;
    int a[n];
    int i;
    int flag=0;
    int ser;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("\nEnter the element you want to search ");
    scanf("%d",&ser);
    for(i=0;i<n;i++){
        if(a[i] == ser){
            printf("\nElement found at index: %d ",i);
            flag=1;
            break;
        }
    }
    
    if(flag==0){
        printf("Element not present in array");
    }
    
}
