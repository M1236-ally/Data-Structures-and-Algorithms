#include<stdio.h>

main()
{
	int n;
	int i;
	int a[10];
	int max;
	int o[10];
	
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	
	printf("Enter the elements of the array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	
	int count[max+1]={0};
	for(i=0;i<n;i++)
	{
		count[a[i]]++;
	}
	
	for(i=1;i<=max;i++)
	{
		count[i]=count[i]+count[i-1];
	}
	
	for(i=n-1;i>=0;i--)
	{
		o[count[a[i]]-1]=a[i];
		count[a[i]]--;
	}
	
	for(i=0;i<n;i++)
	{
		a[i]=o[i];
	}
	
	printf("Sorted array: ");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
		printf(" ");
	}
	
}
