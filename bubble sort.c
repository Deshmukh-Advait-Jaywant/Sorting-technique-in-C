#include<stdio.h>
void bubble_sort();
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
	bubble_sort(a,n);
	
	printf("\nelements after sorting:\n");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}

}

void bubble_sort(int x[],int n)
{
	int i,j,t;
	
	for(i=0;i<=n-2;i++)
	{
		for(j=0;j<=n-2-i;j++)
		{
			if(x[j]>x[j+1])
			{
				t=x[j];
				x[j]=x[j+1];
				x[j+1]=t;
			}
		}
	}
}

















