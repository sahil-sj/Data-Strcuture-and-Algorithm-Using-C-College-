#include<stdio.h>
int main()
{
	int n,s,rev=0,r;
	
	scanf("%d",&n);
	
	s=n;
	while(n!=0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	printf("reverse=%d\n",rev);
	if(s==rev)
	printf("it is palindrome");
	else
	printf("not a palindrome");
}
