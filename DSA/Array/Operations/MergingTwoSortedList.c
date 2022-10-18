#include<stdio.h>
int main()
{
	int k,j,i,a[10],n,m,b[10],c[20];
	
	printf("Enter the no of elements you want in the Ist array\n");
	scanf("%d",&m);
	
	printf("Enter elements in ascending order in the Ist array\n");
	for(i=0;i<m;i++)
	scanf("%d",&a[i]);

	printf("Enter the no of elements you want in the 2nd array\n");
	scanf("%d",&n);
	
	printf("Enter elements in ascending order in 2nd array\n");
	for(i=0;i<n;i++)
	scanf("%d",&b[i]);
	
	i=j=0;
	while(i<m&&j<n)
	{
		if(a[i]<=b[j])
		{
			c[k]=a[i];
			i++;
			k++;
		}
		else
		{
			c[k]=b[j];
			j++;
			k++;
		}
	}
	while(i<m)
	{
		c[k]=a[i];
		i++;
		k++;
	}
	while(j<n)
	{
		c[k]=b[j];
		j++;
		k++;
	}
	printf("merging of two sorted list is : \n");
	for(i=0;i<(m+n);i++)
	printf("%d\n",c[i]);
	
}
