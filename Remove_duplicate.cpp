#include <stdio.h>


int main() {
     int arr[] = {1,2,3,4,5,2,2,3,3};
     int size=9;
     int i, j;
     int count;
     int k;
     int flag=0;


     for(i=0;i<size;i++)  
     {  
       for(j=i+1;j<size;j++)  
       {  
        if(arr[i]==arr[j])  
        {  
         for(k=j;k<size-1;k++)  
         {  
            arr[k] = arr [k + 1];  
         }  
         size--;  
         j--;      
        }  
      }  
     }   
      
      
     printf("\n Array elements after deletion of the duplicate elements: \n");  
      
    for(i=0;i<size;i++)  
    {  
        printf (" %d", arr[i]);
		printf(" ");  
    }  
    return 0;  
}  
