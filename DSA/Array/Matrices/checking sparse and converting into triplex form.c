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
	{
	printf("\nIt is sparse matrix\n");
	b[0][0]=row;
	b[0][1]=col;
	k=1;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(a[i][j]!=0)
			{
				b[k][0]=i;
				b[k][1]=j;
				b[k][2]=a[i][j];
				k++;
			}
		}
	}
	b[0][2]=k-1;
	printf("\nThe triplex form of matrix is : \n");
	for(i=0;i<k;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	
	}
	else
	printf("\nIt is not sparse matrix\n");
}

