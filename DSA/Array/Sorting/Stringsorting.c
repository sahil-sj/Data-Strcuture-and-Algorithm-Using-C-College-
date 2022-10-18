#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,temp;
	char str[10];
	char ar[10];
	
	printf("enter the string\n");
	scanf("%s",str);
	
	int n=strlen(str);
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(str[i]>str[j])
			{
				temp=str[i];
				str[i]=str[j];
				str[j]=temp;
			}
		}
	}
	printf("Sorted string is %s",str);
}
