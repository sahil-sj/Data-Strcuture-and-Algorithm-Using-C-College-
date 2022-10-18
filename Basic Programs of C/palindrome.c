#include<stdio.h>
int main()
{
	int n,s,sum=0;
	printf("enter the three digit no you wish to check that is palindrome or not : ");
	scanf("%d",&n);
	s=n;
	
	while(n!=0)
	{
		n=n%10;
		sum+=n*n*n;
		n=n/10;
	}
	if(sum==s)
	printf("%d is palindrome",s);
	else
	printf("%d is not palindrome",s);
}
