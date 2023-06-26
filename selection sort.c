#include<stdio.h>
void selection_sort();
void main()
{
	int n,i,a[20];
	
	//entering the values
	printf("enter the number of values");
	scanf("%d",&n);
	
	printf("enter the numbers: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\nelements before sorting:\n");
	for(i=0;i<=n;i++)
	{
		printf("%d",a[i]);
	}
	
	//user defined function
	selection_sort(a,n);
	
	printf("\nelements after sorting:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}

}

void selection_sort(int x[],int n)
{
	int i,j,large,index;
	for(i=n-1;i>=1;i--)
	{
		large=x[0];
		index=0;
		for(j=1;j<=i;j++)
		{
			if(large<x[j])
			{
				large=x[j];
				index=j;
			}
		}
		//swap
		x[index]=x[i];
		x[i]=large;
	}
	
}

















