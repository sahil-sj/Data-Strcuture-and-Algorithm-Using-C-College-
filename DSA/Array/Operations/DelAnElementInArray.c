#include<stdio.h>
void main()
{
	int a[10],i,k;
	
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	printf("enter index no you want to delete\n");
	scanf("%d",&k);
	for(i=k;i<4;i++)
	a[i]=a[i+1];
	
		
	for(i=0;i<4;i++)
	printf("%d\n",a[i]);
	
	
}
