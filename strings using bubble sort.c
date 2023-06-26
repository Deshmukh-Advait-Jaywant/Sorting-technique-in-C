#include<stdio.h>
#include<string.h>
void bubble_sort(char [][10],int);
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
	bubble_sort(a,n);
	
	printf("\nelements after sorting:\n");
	for(i=0;i<n;i++)
	{
		printf("%s\t",a[i]);
	}

}

void bubble_sort(char a[10][10],int n)
{
	int i,j;
	char t[10];
	for(i=0;i<=n-2;i++)
	{
		for(j=0;j<=n-2-i;j++)
		{
			if(strcmp(a[j],a[j+1])>0)
			{
				strcpy(t,a[j]);
				strcpy(a[j],a[j+1]);
				strcpy(a[j+1],t);
			}	
		}
	}
}
