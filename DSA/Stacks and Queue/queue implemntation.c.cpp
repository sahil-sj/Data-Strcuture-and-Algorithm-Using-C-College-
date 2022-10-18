#include<stdio.h>
#define N 5
void push(int);
int pop();
void traverse();
int q[N];
int rear=-1;
int front=-1;
int a=1;
int main()
{
	int choice;
	do{
		printf("1. For insertion\n");
		printf("2. For deletion\n");
		printf("3. For traversal\n");
		printf("4. For exit\n");
		printf("Enter the choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			{
				int item;
				printf("enter the item\n");
				scanf("%d",&item);
				push(item);
				break;
			}
			case 2:
			{
				pop();
				break;
			}
			case 3:
			traverse();
			break;
			case 4:
			a=0;
			break;	
		}
	}while(a==1);
}
void push(int x)
{
	if(rear==N-1)			
	printf("Queue is full. Condition of overflow. No insertion takes place\n");
	else if(front==rear==-1)
	{
		front=rear=0;
		q[rear]=x;
	}
	else
	{
		rear=rear+1;
		q[rear]=x;
	}
}
int push()
{
	int y;
	if(front==rear==-1)
	printf("queue is empty. Underflow condition\n");
	else if(front==rear)
	{
	y=q[front];
	front=rear=-1;
	}
	else
	{
	y=q[front];
	front+=1;
	}
}
void traverse()
{
	int i;
	for(i=front;i<=rear;i++)
	printf("%d ",q[i]);
}
