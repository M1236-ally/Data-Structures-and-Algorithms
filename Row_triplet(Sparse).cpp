//Program to convert sparse matrix into row triplet form
#include<stdio.h>

main()
{
	int size=0;
	int r,c;
	int i,j;
    int k=0;
	printf("Enter the number of rows: ");
	scanf("%d",&r);
	printf("Enter the number of columns: ");
	scanf("%d",&c);
		int a[r][c];
	printf("Enter the elements of the Array: ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\n Elements of the Array are:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",a[i][j]);
			printf(" ");
		}
		printf("\n");
	}
	
	//Find non-zero elements
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(a[i][j]!=0)
			{
				size++;
			}
		}
	}
	
    	
	int m[3][size];
	//row triplet 
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if (a[i][j] != 0)
            {
			m[0][k]=i;//row
			m[1][k]=j;//column
			m[2][k]=a[i][j];//value
			k++;
		   }
		}
		
	}
	
	 printf("Triplet representation of the matrix is \n");
    for (int i=0; i<3; i++) 
    { 
        for (int j=0; j<size; j++) 
            printf(" %d ", m[i][j]); 
        printf("\n"); 
    } 
}
