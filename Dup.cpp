#include <stdio.h>


int main() {
    int arr[] = {1, 2, 3, 4, 5, 2,2,3,3};
     int i, j;
    int count;
    int k=1;
    int b[100];
    int flag=0;
    printf("Numbers with more than one duplicate:\n");
    for (int i = 0; i <9; i++) {
    	count=0;
    	flag=0;
        for (int j = i + 1; j <9; j++) {
            if (arr[i] == arr[j]) {
                count++;
                break;
            }
          }
        if (count>0) {
        	if(k==0)
        	{
        		b[k]=arr[i];
        		printf("%d",b[k]);
        		flag=1;
        		k++;
			}
			else
			{
        	  for(int n=0;n<k;n++)
        	  {
        		if(arr[i]==b[n])
        		{
        			flag=1;
        		    break;
				}	
		      }
		     
			  if(flag==0)
			{
				b[k]=arr[i];
			    printf("%d",b[k]);
				k++;
			}
			}
			
			
		} 
    }


    return 0;
}







