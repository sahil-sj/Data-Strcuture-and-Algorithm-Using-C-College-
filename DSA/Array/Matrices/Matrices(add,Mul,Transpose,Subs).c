#include<stdio.h>
int main()
{
	int i,j,n,r1,c1,r2,c2,sum,k,m1[50][50],m2[50][50],res[50][50],ress[50][50];
	
	do{
		printf(" Press 1 for addition of two matrices\n");
		printf(" Press 2 for substraction of two matrices\n");
		printf(" Press 3 for multiplication of two matrices\n");
		printf(" Press 4 for transpose of two matrices\n");
		printf("Enter the choice\n");
		scanf("%d",&n);
	}while(n>4);
	
	switch(n)
	{
		case 1:
			printf("enter the rows and columns of first matrix : ");
			scanf("%d %d",&r1,&c1);
				printf("enter the rows and columns of second matrix : ");
				scanf("%d %d",&r2,&c2);
				
				if(r1==r2 && c1==c2)
				{
					printf("Enter the elements of first matrices\n");
					for(i=0;i<r1;i++)
					{
						printf("\n");
						for(j=0;j<c1;j++)
						{
							scanf("%d",&m1[i][j]);
						}
					}
					printf("Enter the elements of first matrices\n");
					for(i=0;i<r1;i++)
					{
						printf("\n");
						for(j=0;j<c1;j++)
						{
							scanf("%d",&m2[i][j]);
						}
					}
					for(i=0;i<r1;i++)
					{
						for(j=0;j<c1;j++)
						{
							res[i][j]=m1[i][j]+m2[i][j];
							printf("%d",res[i][j]);
						}
						printf("\n");
					}
					break;
					
				}
				else
				printf("Mattrix Invalid");;
				break;
				
				case 2:
						printf("enter the rows and columns of first matrix : ");
		            	scanf("%d %d",&r1,&c1);
				        printf("enter the rows and columns of second matrix : ");
				        scanf("%d %d",&r2,&c2);
				
						printf("Enter the elements of second matrices\n");
					if(r1==r2 && c1==c2)
					{
					for(i=0;i<r1;i++)
					{
						printf("\n");
						for(j=0;j<c1;j++)
						{
							scanf("%d",&m1[i][j]);
						}
					}
					printf("Enter the elements of first matrices\n");
					for(i=0;i<r1;i++)
					{
						printf("\n");
						for(j=0;j<c1;j++)
						{
							scanf("%d",&m2[i][j]);
						}
					}
					for(i=0;i<r1;i++)
					{
						for(j=0;j<c1;j++)
						{
							res[i][j]=m1[i][j]-m2[i][j];
							printf("%d",res[i][j]);
						}
						printf("\n");
					}
					break;
					
				    }
				    else
			     	printf("Mattrix Invalid");
			     	break;
			     	
			     	case 3:
			     			printf("enter the rows and columns of first matrix : ");
		            	scanf("%d %d",&r1,&c1);
				        printf("enter the rows and columns of second matrix : ");
				        scanf("%d %d",&r2,&c2);
				
						printf("Enter the elements of first matrices\n");
					if(c1==r2)
					{
					for(i=0;i<r1;i++)
					{
						printf("\n");
						for(j=0;j<c1;j++)
						{
							scanf("%d",&m1[i][j]);
						}
					}
					printf("Enter the elements of second matrices\n");
					for(i=0;i<r2;i++)
					{
						printf("\n");
						for(j=0;j<c2;j++)
						{
							scanf("%d",&m2[i][j]);
						}
					}
					for(i=0;i<c1;i++)
					{
						for(j=0;j<r2;j++)
						{
							sum=0;
							for(k=0;k<c1;k++)
							{
							sum+=m1[i][k]*m2[k][j];
					
							}
							res[i][j]=sum;
						}
						
					}
					for(i=0;i<r1;i++)
					{
						for(j=0;j<c2;j++)
						{
							
							printf("%d",res[i][j]);
						}
						printf("\n");
					}
					break;
				}
				
				    else
			     	printf("Mattrix Invalid");
			     	break;
			     	
			     	case 4:
			     			printf("enter the rows and columns of first matrix : ");
		            	scanf("%d %d",&r1,&c1);
		
						printf("Enter the elements of a matrix\n");
					
					for(i=0;i<r1;i++)
					{
						printf("\n");
						for(j=0;j<c1;j++)
						{
							scanf("%d",&m1[i][j]);
						}
					}
					for(i=0;i<c1;i++)
					{
						printf("\n");
						for(j=0;j<r1;j++)
						{
							printf("%d\t",m1[j][i]);
						}
					}
				
					
			     		
	}
		
	
	
}
