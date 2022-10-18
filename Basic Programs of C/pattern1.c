/* ****
    ***
     **
      *   */
#include<stdio.h>
int main()
{
	int n,i,j;
	printf("enter no of rows uptp which you wish yo make the pattern\n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("\n");
		for(j=2;j<=i;j++){
		printf("*");
		}
	}
}
