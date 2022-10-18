 #include<stdio.h>
 int main(){
 			
 		int i,n,min,loc,j,temp,a[10];
 		printf("enter the no of elements you want in the array \n");
		scanf("%d",&n);
	
		printf("enter elements in array\n");
 		for(j=0;j<n;j++)
		scanf("%d",&a[j]);
		
		
		for(i=0;i<n-1;i++)
		{
			min=a[i];
			for(j=i+1;j<n;j++)
			{
				if(a[j]<min)
				{
					min=a[j];
					loc=j;
				}
			}
			temp=a[i];
			a[i]=a[loc];
			a[loc]=temp;
		}
		printf("Sorted array by Selction sort is :\n");
		for(i=0;i<n;i++)
		printf("%d\n",a[i]);
}
