#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
	FILE *f1,*f2,*f3;
	int num,i;
	
	f1=fopen("file.txt","w");
	printf("enter data into file\n");
	for(i=1;i<=20;i++)
	{
		scanf("%d",&num);
		if(i=-1)
		break;
		putw(num,f1);
	}
	fclose(f1);
		f1=fopen("file.txt","r");
		f2=fopen("odd.txt","w");
		f3=fopen("even.txt","w");
		
		while((num=getw(f1))!=EOF)
		{
			if (num%2==0)
			putw(num,f2);
			else
			putw(num,f3);
		}
		fclose(f1);
		fclose(f2);
		fclose(f3);
}
