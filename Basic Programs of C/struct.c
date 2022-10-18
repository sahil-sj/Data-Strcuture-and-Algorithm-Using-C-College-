#include<stdio.h>
struct book {
	int q;
	int p;
};
void main()
{
	struct book b[2];
	int i;
	
	for(i=0;i<2;i++)
	{
		printf("enter quantity and price of book no %d\n",i+1);
		scanf("%d %d",&b[i].p,&b[i].q);
	}
	printf("\n");
	
		for(i=0;i<2;i++)
	{
		printf("\nenter quantity and price of book no %d\n",i+1);
		printf("%d  %d",b[i].p,b[i].q);
	}
}
