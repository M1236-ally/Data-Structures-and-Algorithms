//BUBBLE SORT
#include<stdio.h>

main()
{
	int n;
	int i;
	int a[10];
	int flag;
	int temp;
	int j;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	
	printf("Enter the elements of the array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n-1;i++)
	{    flag=0;
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				flag=1;
			}
		}
		
		if(flag==0)
		{
			break;
		}
	}
	
	printf("Sorted array: ");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
		printf(" ");
	}
}
