#include<stdio.h>
int main()
{
	int pos,i,a[10],n,no;
	
	printf("Enter the no of elements you want in the array\n");
	scanf("%d",&n);
	
	printf("Enter elements in the array\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	printf("Enter the index position at which you want to insert the element\n");
	scanf("%d",&pos);
	
	printf("enter value of element you want to insert\n");
	scanf("%d",&no);
	
	for(i=n-1;i>=pos;i--)
	a[i+1]=a[i];
	
	a[pos]=no;
	
	for(i=0;i<n+1;i++)
	printf("%d\n",a[i]);
}
