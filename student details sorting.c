#include<stdio.h>
#include<string.h>
struct student
{
	int roll_number;
	char name[20];
	float weight;
}s;
void sort_weight();
void sort_hallticket();
void main()
{
	int i,n;
	
	printf("enter the number of students : ");
	scanf("%d",&n);
	
	struct student s[100];
	
	for(i=0;i<=n-1;i++)
	{
		printf("enter student - :\nRoll Number\tName\tWeight");
		scanf("%d %s %f",&s[i].roll_number,s[i].name,&s[i].weight);
		
	}
	
	sort_weight(s,n);
	sort_hallticket(s,n);
	
}
void sort_weight(struct student s[100],int n)
{                   
	struct student t;    
	int i,j,x,y,z;
	
	for(i=0;i<=n-2;i++)
	{
		for(j=0;j<=n-2-i;j++)
		{
			if(s[j].weight>s[j+1].weight)
			{
				t=s[j];
				s[j]=s[j+1];
				s[j+1]=t;
			}
		}
	}
	printf("______________________________________________");
	printf("\nelements after sorting : \n");
	printf("\nstudent name \t roll number \t weight\n");
	for(i=0;i<=n-1;i++)
	{
		printf("%5s %15d %19f",s[i].name,s[i].roll_number,s[i].weight);
		printf("\n");
	}
	printf("______________________________________________");
}
void sort_hallticket(struct student s[100],int n)
{                 

	struct student t;      
	int i,j,x,y,z;
	
	for(i=0;i<=n-2;i++)
	{
		for(j=0;j<=n-2-i;j++)
		{
			if(s[j].roll_number<s[j+1].roll_number)
			{
				t=s[j];
				s[j]=s[j+1];
				s[j+1]=t;
			}
		}
	}
	
	printf("\n\n\n");
	printf("______________________________________________");
	printf("\nelements after sorting : \n");
	printf("\nstudent name \t roll number \t weight\n");
	for(i=0;i<=n-1;i++)
	{
		printf("%5s %15d %19f",s[i].name,s[i].roll_number,s[i].weight);
		printf("\n");
	}
	printf("______________________________________________");
}
