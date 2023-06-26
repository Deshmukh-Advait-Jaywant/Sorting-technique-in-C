#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct train
{
	char time[6];
	char starting_point[20];
	char destination[20];
};
void sort_time();
void sort_start();
void sort_end();
void main()
{
	int n,i,x;
	
	printf("enter the number of train\n");
	scanf("%d",&n);
	
	struct train t[100];
	
	printf("________________________________________________________________");
	printf("enter the details of the train asked below : \n");
	printf("time of arrivial\tstarting point\tdestination");
	for(i=0;i<=n-1;i++)
	{
		scanf("%s %s %s",&t[i].time,&t[i].starting_point,&t[i].destination);
	}
	printf("________________________________________________________________");
	
	printf("enter a number : \n");
	printf("enter 1 to see train according to time of arriaval :\n ");
	printf("enter 2 to see train according to strating point : \n");
	printf("enter 3 to see train according to destination of train :\n ");
	scanf("%d",&x);
	
	switch(x)
	{
		case 1:
			sort_time(t,n);
			break;
		case 2:
			sort_start(t,n);
			break;
		case 3:
			sort_end(t,n);
			break;
	}
}
void sort_time(struct train t[100],int n)
{
	
	struct train a;
	int i,j;

	for(i=0;i<=n-2;i++)
	{
		for(j=0;j<=n-2-i;j++)
		{
			if(strcmp(t[j].time,t[j+1].time)>0)
			{
				a=t[j];
				t[j]=t[j+1];
				t[j+1]=a;
			}
		}
	}
	printf("The sorted list is : \n");
	printf("time of arrivial\tstarting point\tdestination");
	for(i=0;i<=n-1;i++)
	{
		printf("%s %s %s",t[i].time,t[i].starting_point,t[i].destination);
	}
}
void sort_start(struct train t[100],int n)
{
	//	printf("________________________________1");
	int i,j;
	struct train a;
	
	for(i=0;i<=n-2;i++)
	{
		for(j=0;j<=n-2-i;j++)
		{
			if(strcmp(t[j].starting_point,t[j+1].starting_point)>0)
			{
				a=t[j];
				t[j]=t[j+1];
				t[j+1]=a;
			}
		}
	}
	printf("The sorted list is : \n");
	printf("time of arrivial\tstarting point\tdestination");
	for(i=0;i<=n-1;i++)
	{
		printf("%s %s %s\n",t[i].time,t[i].starting_point,t[i].destination);
	}
}
void sort_end(struct train t[100],int n)
{
	//	printf("________________________________1");
	struct train a;
	int i,j;
	for(i=0;i<=n-2;i++)
	{
		for(j=0;j<=n-2-i;j++)
		{
			if(strcmp(t[j].destination,t[j+1].destination)>0)
			{
				a=t[j];
				t[j]=t[j+1];
				t[j+1]=a;
			}
		}
	}
	printf("The sorted list is : \n");
	printf("time of arrivial\tstarting point\tdestination");
	for(i=0;i<=n-1;i++)
	{
		printf("%s %s %s",t[i].time,t[i].starting_point,t[i].destination);
	}
}
