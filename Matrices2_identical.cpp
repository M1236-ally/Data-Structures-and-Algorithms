//Check 2 matrices are identical or not
#include<stdio.h>

main()
{
	int a[10][10];
	int b[10][10];
	int r1,c1,r2,c2;
	int i,j;
	int flag=0;
	printf("Enter the number of rows for Array1: ");
	scanf("%d",&r1);
	printf("Enter the number of columns for Array1: ");
	scanf("%d",&c1);
	printf("Enter the elements of the Array1: ");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
		printf("\n Elements of the Array1 are:\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("%d",a[i][j]);
			printf(" ");
		}
		printf("\n");
	}
	
	printf("Enter the number of rows for Array2: ");
	scanf("%d",&r2);
	printf("Enter the number of columns for Array2: ");
	scanf("%d",&c2);
		printf("Enter the elements of the Array2: ");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
		printf("\n Elements of the Array2 are:\n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("%d",b[i][j]);
			printf(" ");
		}
		printf("\n");
	}
	
	if((r1==r2)&&(c1==c2))
	{
		flag=1;
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			if(a[i][j]!=b[i][j])
			{
				flag=2;
				break;
			}
		}
	}
    }
	
	if(flag==0)
	{
	    printf("Arrays cannot be compared");
	}
	else if(flag==1)
	{
	   printf("Arrays are identical");
	}
	else
	{
		printf("Arrays are not identical");
	}
}
