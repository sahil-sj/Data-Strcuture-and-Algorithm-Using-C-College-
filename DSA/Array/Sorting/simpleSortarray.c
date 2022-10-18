#include<stdio.h>
#include<string.h>
int main()
{
	int ar[5],i,j,t,n,*pt;
	printf("enter elements\n");
	scanf("%d",&n);
	pt=calloc(n,sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if (ar[i] > ar[j])
			{
				t=ar[i];
				ar[i]=ar[j];
				ar[j]=t;
			}
		}
	}
		for(i=0;i<n;i++)
	{
		printf("%d\t",ar[i]);
	}
	
}
