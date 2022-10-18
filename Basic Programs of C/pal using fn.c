#include<stdio.h>
int main()
{
	int r,n,x,rev=0;
	printf("enter n to check for palindrome");
	scanf("%d",&n);
	
	x=pal(n);

	if(n==x)
	printf("It is palindrome");
	else
	printf("It is not palindrome");
	
}
int pal(int n)
{
	int rev,r;
		while(n!=0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	return rev;
	
}
