#include<stdio.h>
void insertion_sort();
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
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	
	//user defined function
	insertion_sort(a,n);
	
	printf("\nelements after sorting:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}

}

void insertion_sort(int x[],int n)
{
	int i,j,t;
	for(i=1;i<=n-1;i++)
	{
		t=x[i];
		for(j=i-1;j>=0 && x[j]>t;j--)
		{
			x[j+1]=x[j];
		}
		x[j+1]=t;
	}
}

