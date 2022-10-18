#include<stdio.h>
#include <stdlib.h>
void traversal();
void enque();
void deque();
#define N 5
int q[N];
int f=-1,r=-1;
int main()
{
	int choice,a=1;

	do{
		printf("1. for enque\n");
		printf("2. For deque\n");
		printf("3. For Traversal\n");
		printf("enter the choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				enque();
				break;
			case 2:
				deque();
				break;
			case 3:
				traversal();
				break;		
			case 4:
				a=0;
		}
	}while (a==1);
}
void enque()
{
	int item;
	printf("enter item to enque\n");
	scanf("%d",&item);
	if((f==0 && r==N-1) || (f=r+1))
	{
		printf("overflow\n");
	}
	else if(f==r==-1)
	{
		f=0;
		r=0;
		q[r]=item;
	}
	else if(r==N-1)
	{
		r=0;
		q[r]=item;
	}
	else
	{
		r++;
		q[r]=item;
	}
}
void deque()
{
	int hg;
	if(f==r==-1)
	{
		printf("underflow\n");
	}
	else if(f==r)
	{
		hg=q[f];
		f=0;
		r=0;
	}
	else if(f=N-1)
	{
		hg=q[f];
		f=0;
	}
	else
	{
		f++;
		hg=q[f];
	}
}
void traversal()
{
	int i;
	if(f<r){
	for(i=f;i<=r;i++)
	printf("%d ",q[i]);}
	else{
		for(i=r;i<N-1;i++)
		printf("%d ",q[i]);
		for(i=0;i<=f;i++)
		printf("%d ",q[i]);
	}
}
