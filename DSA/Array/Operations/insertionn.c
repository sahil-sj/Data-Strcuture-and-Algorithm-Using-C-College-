 #include<stdio.h>
 int main(){
 	int i,j,n,temp,a[10];
	printf("enter the no of elements you want in the array \n");
				scanf("%d",&n);
				printf("enter elements in array\n");
 				for(j=0;j<n;j++)
				scanf("%d",&a[j]);
			for(i=1;i<n;i++)
			{
				temp=a[i];
				j=i-1;
				while(j>=0 && a[j]>temp)
				{
					a[j+1]=a[j];
					j--;
				}
				a[j+1]=temp;
			}
				printf("Sorted array by Insertion sort is :\n");
		for(i=0;i<n;i++)
		printf("%d\n",a[i]);
}
