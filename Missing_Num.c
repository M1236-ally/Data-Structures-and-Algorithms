#include<stdio.h>

main()
{
	int n;
	int a[10];
	int i;
	int total=0;
	int sum=0;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	printf("Enter the elements of the array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	int min=a[0];
	int max=a[0];

     for(i=0;i<n;i++)
     {
     	if(a[i]<min)
     	{
     	   min=a[i];
		}
	 }
	 
	  for(i=0;i<n;i++)
     {
     	if(a[i]>max)
     	{
     	   max=a[i];
		}
	 }
    
     for(i=min;i<=max;i++)
     {
     	total=total+i;
	 }

  
    for(i=0 ; i<n; i++){
     sum = sum + a[i];
    }
 
    printf("Missing number is %d",total-sum);
    return 0;
}
