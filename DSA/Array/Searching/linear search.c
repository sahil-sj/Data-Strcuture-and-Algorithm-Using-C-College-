#include<stdio.h>
int main()
{
	int i,n,no,count=0,a[10];
	
	printf("eneter no of elements you want to print in an array\n");
	scanf("%d",&no);
	printf("enter elelemnts in the array\n");
	for(i=0;i<no;i++)
	scanf("%d",&a[i]);
	
	printf("enter the no of elements you want to search in an array\n");
	scanf("%d",&n);
	
	for(i=0;i<no;i++)
	{
		if(a[i]==n)
		{
			printf("Search successful and element found at %d index\n",i);
			count=1;
			break;
		}
	}
	if(count==0)
	printf("search unsuccessful");	
}
