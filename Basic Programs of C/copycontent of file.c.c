#include <stdio.h>
#include<string.h>
int main()
{
	  	FILE *fp1,*fp2;
	  	char c;
		   
	  	fp1= fopen("abc.txt","r");
	  	if(fp1==NULL)
	  	{
	  		printf("Invalid file");
		}
		fp2=fopen("efg.txt","w");
			if(fp2==NULL)
	  	{
	  		printf("Invalid file");
		}
		while((c=fgetc(fp1))!=EOF)
		{
			fputc(c,fp2);
		}
		printf("sucessfully copied");
		fclose(fp1);
		fclose(fp2);
}
