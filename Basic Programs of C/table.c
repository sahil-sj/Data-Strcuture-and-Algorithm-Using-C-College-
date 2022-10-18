#include<stdio.h>
int main()
{
	int i,n,s;
	printf("enter the number for which you want to display the table : ");
	scanf("%d",&n);
	
	
	for(i=1;i<=10;i++)
	{
		s=n*i;
		printf("%d * %d = %d\n",n,i,s);
	}
}
