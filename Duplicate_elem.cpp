#include<stdio.h>

main()
{
	int a[]={1,2,3,3,2,4,6,5,2,3};
	int temp=a[0];
	int b[100];
	int n=0;
	int flag=0;
	for(int i=1;i<10;i++)
	{
		if(temp==a[i])
		{
			for(int j=0;j<=n;j++)
			{
				if(b[j]==a[i])
				{
					flag=1;
					break;
				}
		    }
		  if(flag==0)
		  {
		  	b[n]=a[i];
		  	n++;
		  }  
	    }
	}
	
	for(int i=0;i<n;i++)
	{
		printf("%d",b[i]);
	}
}
