#include<stdio.h>
int main()
{
	int r,n,n1,i,sum,x;
	
	printf("enter range : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		n1=i;
		sum=0;
		
		while(n1!=0)
		{
			r=n1%10;
			sum+=r*r*r;
			n1=n1/10;
		}
		if(sum==i)
		printf("%d\t",sum);		
	}
}