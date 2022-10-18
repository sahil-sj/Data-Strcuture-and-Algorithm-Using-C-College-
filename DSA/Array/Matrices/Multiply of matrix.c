#include<stdio.h>
int main()
{
	int m1[50],m2[50],res[50],i,j,k,r1,c1,r2,c2,sum;
	printf("enter rows and columns of first matrix\n ");
	scanf("%d%d",&r1,&c1); 
	printf("enter rows and columns of second matrix\n ");
	scanf("%d%d",&r2,&c2);
	
	if(c1==r2)
	{
		printf("enter elements of first matrix\n");
		for(i=0;i<r1;i++)
		printf("\n");
			for(j=0;j<c1;j++)
			{
					scanf("%d",m1[i][j]);
			}	
		}	
			printf("enter elements of second matrix\n");
		for(i=0;i<r2;i++)
		printf("\n");
			for(j=0;j<c2;j++)
			{
					scanf("%d",m2[i][j]);
			}	
		}	
		printf("Multiplication of matrices is :\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				for(k=0;k<c1;k++)
				{
					sum+=m1[i][k]*m2[k][j];
				}
				res[i][j]=sum;
			}
		}
		
		
	} 
	
}
