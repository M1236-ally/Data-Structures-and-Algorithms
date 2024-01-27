//check whether matrix is identitiy or not
#include<stdio.h>

main()
{
	int a[10][10];
	int r,c;
	int i,j;
	int flag=0;
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
		for(j=0;j<c;j++)
		{
			if(i!=j && a[i][j]!=0)
			{
				flag=1;
				break;
			}
			else if(i==j && a[i][j]!=1)
			{
				flag=1;
				break;
			}
		}
	}
	
	if(flag==0)
	{
		printf("The matrix is an identity matrix");
	}
	else
	{
     	printf("The matrix is not an identity matrix");
	}
}
