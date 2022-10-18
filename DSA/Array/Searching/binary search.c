#include<stdio.h>
void main()
{
	int a[10],i,lb=0,ub,item,n,mid,loc=-1;
	
	printf("enter no of elements you want in the array\n");
	scanf("%d",&n);
	ub=n-1;
	printf("enter elements in array in ascending order\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	printf("enter no to search in a array\n");
	scanf("%d",&item);
	
	
	while(lb<=ub)
	{
		mid=(lb+ub)/2;
		if(a[mid]==item)
		{
			loc=mid;
			break;
		}
		else if(a[mid]<item)
		lb=mid+1;
		else
		ub=mid-1;
	}
	if(loc==-1)
	printf("search unsuccessful");
	else
	printf("search successful and element found at %d index",loc);
}
