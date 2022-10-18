#include<stdio.h>

int main()
{
	FILE *fp1,*fp2;
	char c;
	fp1=fopen("abc.txt","r");
	if(fp1==NULL)
	{
		printf("file not exists");
		exit(1);
	}
		fp2=fopen("cde.txt","w");
	if(fp2==NULL)
	{
		printf("file not exists");
		exit(1);
	}
	while((c=fgetc(fp1))!=EOF)
	{
		fputc(c,fp2);
	}
	printf("successfully copied");
	fclose(fp1);
	fclose(fp2);
}
