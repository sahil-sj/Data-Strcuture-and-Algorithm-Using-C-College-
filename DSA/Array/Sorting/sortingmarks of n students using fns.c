#include<stdio.h>
int main()
{
	int *ptr,i,n;
	
	printf("enter no of students : ");
	scanf("%d",&n);
	
	ptr=(int*)calloc(n,sizeof(int));
	
	for(i=0;i<n;i++)
	{
		printf("enter marks of student %d : ", i+1);
		scanf("%d",(ptr+i));
	}
	sort(ptr,n);
	
	printf("the sorted marks are ");
	for(i=0;i<n;i++)
	{
		printf("%d ",ptr[i]);
	}
	
}
void sort(int *ptr,int n)
{
	int i,j,t;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(ptr[i]<ptr[j])
			{
				t=ptr[i];
				ptr[i]=ptr[j];
				ptr[j]=t;	
			}
		}
	}
}
