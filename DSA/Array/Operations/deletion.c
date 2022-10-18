#include<stdio.h>
int main()
{
	int pos,i,a[10],n;
	
	printf("Enter the no of elements you want in the array\n");
	scanf("%d",&n);
	
	printf("Enter elements in the array\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	printf("Enter the index position at which you want to delete the element\n");
	scanf("%d",&pos);
	
	for(i=pos;i<n-1;i++)
	a[i]=a[i+1];
	
	for(i=0;i<n-1;i++)
	printf("%d\n",a[i]);
}
