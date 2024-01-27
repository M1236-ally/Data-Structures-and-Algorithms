//SELECTION SORT
#include<stdio.h>

main()
{
	int n;
	int i;
	int j;
	int a[10];
	int temp;
	int min;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	
	printf("Enter the elements of the array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		
		if(min!=i)
		{
			temp=a[i];
			a[i]=a[min];
			a[min]=temp;
		}
	}
	
	printf("Sorted array: ");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
		printf(" ");
	}
}
