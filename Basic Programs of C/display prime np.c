#include<stdio.h>
int main()
{
	int count,i,j,n;
	
	printf("enter the range of prime no you want to diplay: ");
	scanf("%d",&n);
	
	
	for(i=1;i<=n;i++)
	{
		count=0;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			
			count=1;
			break;
		
	
	}
		if(count==0 && i!=1)
		printf("%d\t",i);
	}
}
