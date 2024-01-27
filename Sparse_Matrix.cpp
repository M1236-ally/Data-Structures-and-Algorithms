//Check whether a matrix is sparse or not
#include<stdio.h>

main()
{
	int a[10][10];
	int r,c;
	int i,j;
	int count=0;
	printf("Enter the number of rows: ");
	scanf("%d",&r);
	printf("Enter the number of columns: ");
	scanf("%d",&c);
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
	
	for(i = 0; i < r; i++){
      for(j = 0; j < c; j++){
         if(a[i][j] == 0)
            count++;
      }
   }
   if(count > ((r * c)/2))
      printf("Matrix is a sparse matrix ");
   else
      printf("Matrix is not sparse matrix");
}
