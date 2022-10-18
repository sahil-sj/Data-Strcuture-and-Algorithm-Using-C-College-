#include<stdio.h>
int main()
{
	int pos,i,a[10],n;
	
	printf("Enter the no of elements you want in the array\n");
	scanf("%d",&n);
	
	printf("Enter elements in the array\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	printf("Entered array is : \n");
	for(i=0;i<n;i++)
	printf("%d\n",a[i]);
}
