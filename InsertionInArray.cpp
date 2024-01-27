#include<stdio.h>
main()
{
    int n;
    int a[n];
    int i;
    int j;
    int elem,pos;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("Element to be inserted: ");
    scanf("%d",&elem);
    
    printf("Enter the position where element has to be inserted= ");
    scanf("%d",&pos);
    
    for(i=n-1;i>=pos;i--)
    {
    	a[i+1]=a[i];
	}
	 a[pos]=elem;
    printf("The elements of the array are: ");
    for(j=0;j<n+1;j++)
    {
        printf("%d",a[j]);
    }
}

