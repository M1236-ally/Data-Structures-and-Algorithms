#include<stdio.h>

main()
{
	 int n;
    int a[100];
    int i;
    int mid;
    int lb,ub;
    int ser;
    printf("Enter the size of array:");
    scanf("%d" ,&n);
    printf("\n");
    
    printf("Enter the elements of the array: ");
    for( i = 0;i<n;i++){
        scanf("%d" ,&a[i]);
    }
    
    printf("Array Elements are:");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    
    printf("\n Enter the element you want to search ");
    scanf("%d",&ser);
    lb=0;
    ub=n-1;
    mid=(lb+ub)/2;
    
    while(lb<=ub)
    {
      if(ser<a[mid])
	  {
	  	ub=mid-1;
	  }
	  else if(ser==a[mid])
      {
    	printf("Element found at index %d",mid);
    	break;
	  } 
	  else
	  {
	  	lb=mid+1;
	  }
      mid=(lb+ub)/2;
    }
    
    if(lb>ub)
    {
    	printf("\nElement not found in array");
	}
} 

