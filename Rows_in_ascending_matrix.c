//to print a matrix in ascending order
#include<stdio.h>

main()
{
	int a[10][10];
	int r,c;
	int i,j;
	int temp;
	int k;
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
	
    for (i= 0; i<r; ++i) {
        for (j = 0; j <c; ++j) {
            for (k = (j + 1); k <c; ++k) {
                if (a[i][j] > a[i][k]) {
                    temp = a[i][j];
                    a[i][j] = a[i][k];
                    a[i][k] = temp;
                }
            }
        }
    }
       
 
    

    printf("\n Elements of the Array after sorting rows in ascending order are:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",a[i][j]);
			printf(" ");
		}
		printf("\n");
	}
}
