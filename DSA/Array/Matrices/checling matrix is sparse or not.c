#include<stdio.h>
int main()
{
	int a[10][10],b[20][3];
	int i,j,k,row,col;
	printf("Enter the no of row and column respectively\n");
	scanf("%d %d",&row,&col);
	
	printf("Enter the elements in the matrix\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Entered matrix is : \n");
	for(i=0;i<row;i++)
	{
		printf("\n");
		for(j=0;j<col;j++)
		{
			printf("%d ",a[i][j]);
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(a[i][j]!=0)
			k++;
		}
	}
	if(k<=(row*col)/2)
	printf("\nIt is sparse matrix\n");
	else
	printf("\nIt is not sparse matrix\n");
}
