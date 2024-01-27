#include <stdio.h>


 
 int counting_sort(int a[],int n,int pos)
 {
     int o[n];
     int count[10]={0};
     for(int i=0;i<n;i++)
     {
         count[(a[i]/pos)%10]++;
     }
     
     for(int i=1;i<10;i++)
     {
         count[i]=count[i]+count[i-1];
     }
     
     for(int i=n-1;i>=0;i--)
     {
         o[count[(a[i]/pos)%10]-1]=a[i];
     }
     
     for(int i=0;i<n;i++)
     {
         a[i]=o[i];
     }
     
     for(int i=0;i<n;i++)
     {
         printf("%d",a[i]);
     }
 }
int main()
{
    int n;
    int a[20];
   
   printf("Enter the size of the array: ");
   scanf("%d",&n);
    printf("Enter the elements of the array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    int max=a[0];
     for(int i=0;i<n;i++)
     {
         if(a[i]>max)
        {
          max=a[i];
        }
     }
    
    for(int pos=1;max/pos>0;pos=pos*10)
    {
        counting_sort(a,n,pos);
    }
    return 0;
}

