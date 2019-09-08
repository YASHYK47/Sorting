#include<stdio.h>
int main()
{
	int i,n,A[100],j,min,temp;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	printf("\nEnter the elements:\n");
	for(i=0;i<n;i++)
	scanf("%d",&A[i]);
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(A[j]<A[min])
			{
			    min=j;				
			}
	    }
		  temp=A[i];
		  A[i]=A[min];
		  A[min]=temp;  
	  
	}
	printf("Sorted array is:\n");
	for(i=0;i<n;i++)
	printf("%d\n",A[i]);
}
