#include<stdio.h>

main()
{
	int arr[]={1,3,2,5,5,2,7,3,5};
	 int i, j,n;
    int count;
    int k=1;
    int b[100];
    int flag=0;
    printf("Numbers with more than one duplicate:\n");
    for (i = 0; i <9; i++) {
    	count=0;
    	flag=0;
        for (j = i + 1; j <9; j++) {
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
        	  for(n=0;n<k;n++)
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
