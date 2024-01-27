//print sum of all rows of matrix
#include<stdio.h>

main()
{
	int a[10][10];
	int r,c;
	int i,j;
	int sum;
	printf("Enter the number of rows: ");
	scanf("%d",&r);
	printf("Enter the number of columns: ");
	scanf("%d",&c);
	printf("Enter the elements of the Array1: ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
		printf("\n Elements of the Array1 are:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",a[i][j]);
			printf(" ");
		}
		printf("\n");
	}
	
	for(i=0;i<r;i++)
	{
		sum=0;
		for(j=0;j<c;j++)
		{
			sum=sum+a[i][j];
		}
	}
		printf("Sum of all rows %d",sum);
}
