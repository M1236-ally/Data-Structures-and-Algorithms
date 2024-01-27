#include<stdio.h>
main()
{
    int n;
    int a[10];
    int i;
    int pos;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("Enter the position from which you want to delete an element: ");
    scanf("%d",&pos);
    
    for(i=pos;i<n-1;i++)
    {
    	a[i]=a[i+1];
	}
	
	for(i=0;i<n-1;i++)
	{
		printf("%d",a[i]);
	}
}
