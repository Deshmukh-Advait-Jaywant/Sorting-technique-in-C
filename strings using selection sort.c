#include<stdio.h>
#include<string.h>
void selection_sort(char [][10],int);
void main()
{
	int n,i;
	char a[10][10];
	
	//entering the values
	printf("enter the number of strings");
	scanf("%d",&n);
	
	printf("enter the strings: ");
	for(i=0;i<n;i++)
	{
		scanf("%s",a[i]);
	}
	
	printf("\nstring before sorting:\n");
	for(i=0;i<n;i++)
	{
		printf("%s\t",a[i]);
	}
	
	//user defined function
	selection_sort(a,n);
	
	printf("\nelements after sorting:\n");
	for(i=0;i<n;i++)
	{
		printf("%s\t",a[i]);
	}

}

void selection_sort(char x[][10],int n)
{
	int i,j,index;
	char large[10];
	for(i=n-1;i>=1;i--)
	{
		strcpy(large,x[0]);
		index=0;
		for(j=1;j<=i;j++)
		{
			if(strcmp(large,x[j])<0)
			{
				strcpy(large,x[j]);
				index=j;
			}
		}
		strcpy(x[index],x[i]);
		strcpy(x[i],large);
	}
}
