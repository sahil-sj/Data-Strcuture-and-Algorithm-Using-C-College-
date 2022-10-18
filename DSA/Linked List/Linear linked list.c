#include<stdio.h>
#include<stdlib.h>
void insert_at_beg();
void insert_at_end();
void insert_at_pos();
void deletion_at_beg();
void del_at_end();
void del_at_pos();

struct node{
	int data;
	struct node *next;
};
struct node *head,*temp;
void insert_at_end(){
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter data\n");
	scanf("%d",&newnode->data);
	temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=newnode;
	newnode->next=NULL;
	temp=head;
	while(temp!=0)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
}
void insert_at_pos(){
	int i=1,pos,count=1;
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter the position after which you want to insert the node\n");
	scanf("%d",&pos);
	temp=head;
	while(temp->next!=NULL)
	{
		count++;
		temp=temp->next;
	}
	if(pos>count)
	{
		printf("Invalid position\n");
	}
	else
	{
		temp=head;
		while(i<pos)
		{
			temp=temp->next;
			i++;
		}
		printf("enter data\n");
		scanf("%d",&newnode->data);
		newnode->next=temp->next;
		temp->next=newnode;
		temp=head;
		while(temp!=0)
		{
			printf("%d ",temp->data);
			temp=temp->next;
		}
	}
}
void deletion_at_beg(){
	temp=head;
	head=head->next;
	free(temp);
		temp=head;
		while(temp!=0)
		{
			printf("%d ",temp->data);
			temp=temp->next;
		}
}
void del_at_end(){
	struct node *prevnode;
	temp=head;
	while(temp->next!=NULL)
	{
		prevnode=temp;
		temp=temp->next;
	}
	prevnode->next=NULL;
	free(temp);	
		temp=head;
	while(temp!=0)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
}
void del_at_pos(){
	int i=1,pos,count=1;
	struct node*nextnode;
	temp=head;
	while(temp->next!=NULL)
	{
		count++;
		temp=temp->next;
	}
	if(pos>count)
	{
		printf("Invalid position\n");
	}
	printf("Enter position you want to delete\n");
	scanf("%d",&pos);
	temp=head;
	while(i<pos-1)
	{
		temp=temp->next;
		i++;
	}
	nextnode=temp->next;
	temp->next=nextnode->next;
	free(nextnode);
		temp=head;
		while(temp!=0)
		{
			printf("%d ",temp->data);
			temp=temp->next;
		}
}
int main()
{
	int choice;
	create();
	do{
	printf("\n1. for insertion at beginning");
	printf("\n2. for insertion at end");
	printf("\n3. for insertion after particular position");
	printf("\n4. for deletion at beginning");
	printf("\n5. for deletion at end");
	printf("\n6. for deletion at position");
	printf("\n7. for exit");
	printf("\nEnter the choice\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			insert_at_beg();
			break;
		case 2:
			insert_at_end();
			break;
		case 3:
			insert_at_pos();
			break;
		case 4:
			deletion_at_beg();
			break;
		case 5:
			del_at_end();
			break;
		case 6:
			del_at_pos();
			break;
		case 7:
			break;	
	}
}while(choice<8);
}
void insert_at_beg()
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter data\n");
	scanf("%d",&newnode->data);
	newnode->next=head;
	head=newnode;
	temp=head;
	while(temp!=0)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
}

void create()
{
	struct node *newnode,*temp;
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
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
}
