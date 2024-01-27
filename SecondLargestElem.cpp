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
    
    int max=a[0];
    int sl=a[0];
    for(i=1;i<n;i++)
    {
    	if(max<a[i])
    	{
    		sl=max;
    		max=a[i];
		}
		else if(a[i]>sl && a[i]<max)
		{
			sl=a[i];
		}
	}
	
	printf("Second largest element of the array= %d",sl);
	
	
}
