#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head1,*head2,*temp;
int main()
{
	printf("Enter element in the Ist linked list\n");
	create(&head1);
	
	printf("Enter element in the 2nd linked list\n");
	create(&head2);
	merge(&head1,&head2);
}
void create(struct node *head)
{
	struct node *newnode;
	head=NULL;
	int n,i;
	printf("enter no of nodes\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("enter data\n");
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		if(head==NULL)
		{
			temp=head=newnode;
		}
		else
		{
			temp->next=newnode;
			temp=temp->next;
		}
	}
	temp=head;
	printf("your list is : \n");
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
}
void merge(struct node *head1,struct node *head2)
{
	temp=head1;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=head2;
	printf("merged list is \n");
	temp=head1;
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
}
