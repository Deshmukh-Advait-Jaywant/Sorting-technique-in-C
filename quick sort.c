#include<stdio.h>
void quick_sort();
void partition();
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
	quick_sort(a,0,n-1);
	
	printf("\nelements after sorting:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}

}
void quick_sort(int a[],int lb,int ub)
{
	int j;
	if(lb>=ub)
	{
		return;
	}
	partition(a,lb,ub,&j);
	quick00_sort(a,lb,j-1);
	quick_sort(a,j+1,ub);
}
void partition(int a[],int lb,int ub,int *j)
{
	int down,up,x,t;
	down=lb;
	up=ub;
	x=a[lb];
	while(down<up)
	{
		while(a[down]<=x)
		{
			down++;
		}
		while(a[up]>x)
		{
			up--;
		}
		if(down<up)
		{
			t=a[down];
			a[down]=a[up];
			a[up]=t;
		}
	}
	a[lb]=a[up];
	a[up]=x;
	*j=up;
}

