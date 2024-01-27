#include<stdio.h>

main()
{
	int a[10][10];
	int b[10][10];
	int matrix[10][10];
	int r,c;
	int i,j;
	int choice;
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
	
		printf("Enter the elements of the Array2: ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
		printf("\n Elements of the Array2 are:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",b[i][j]);
			printf(" ");
		}
		printf("\n");
	}
	printf("\nChoose the matrix operation,\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
	switch(choice)
	{
		case 1:
		for(int i=0;i<r;i++)
		{
		 for(int j=0;j<c;j++)
		 {
		   matrix[i][j] = a[i][j] + b[i][j];
	     }
	    } 

        printf("Sum of matrix: \n");
         for(int i=0; i<r; i++)
        {
          for(int j=0; j<c; j++)
            printf("%d\t",matrix[i][j]);
           printf("\n"); 
        }

        break;
      case 2:
       	for(int i=0;i<r;i++)
		{
		 for(int j=0;j<c;j++)
		 {
		   matrix[i][j] = a[i][j] - b[i][j];
	     }
	    } 

        printf("Subtraction of matrix: \n");
           for(int i=0; i<r; i++)
        {
          for(int j=0; j<c; j++)
            printf("%d\t",matrix[i][j]);
           printf("\n"); // new line
        }
        break;
      case 3:
       for(int i=0; i <r; i++)
       {
        for(int j=0; j <c; j++)
        {
          matrix[i][j] = 0; 
          for (int k = 0; k <r; k++)
         {
            matrix[i][j] += a[i][k] * b[k][j];
         }
        }
       }
        printf("Multiplication of matrix: \n");
         for(int i=0; i<r; i++)
        {
          for(int j=0; j<c; j++)
          {
            printf("%d",matrix[i][j]);
            printf(" ");
          }
          printf("\n"); 
        }
        break;
         default:
            printf("Option not available");
     }

}

