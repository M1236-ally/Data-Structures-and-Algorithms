//Print diagonal elements
#include<stdio.h>

main()
{
	int a[10][10];
	int r,c;
	int i,j;
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
	
	if(r==c)
	{
	   printf("\nDiagonal elements of matrix are \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==j)
			{
				printf("%d",a[i][j]);
			}
			else
                printf("  "); 
		}
		printf("\n");
	}
   }
   
}
