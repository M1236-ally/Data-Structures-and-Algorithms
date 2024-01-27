#include<stdio.h>

void binary_search(int a[],int low,int high,int search)
{
   
     //Base Case
    if(low>high)
    {
        printf("Element not found");
        return;
    }
    int mid=(low+high)/2;
    if(a[mid]==search)
    {
        printf("Element found at %d",mid);
    }
    else if(search<a[mid])
    {
        binary_search(a,low,mid-1,search);
    }
    else
    {
        binary_search(a,mid+1,high,search);
    }
}
main()
{
    int n;
    int a[10];
    int sr;
    int i;
    printf("Enter the size of the array= ");
    scanf("%d",&n);
    printf("Enter the elements of the array= ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter the element to be searched= ");
    scanf("%d",&sr);
    binary_search(a,0,n-1,sr);

}
