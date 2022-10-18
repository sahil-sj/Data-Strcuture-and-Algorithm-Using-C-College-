#include<stdio.h>
#include<stdlib.h>
#include<stdlib.h>
void merge_sort(int *, int); 
void merge(int *, int *, int, int *, int); 
int main()
{
	int i,j,m,n,a[10],choice,loc,min;
	int lb,ub;
	int arr[11] = {17, 34, 25, 49, 9, 62, 55, 89, 92, 71, 34}; 
	int newarr[10]; 
	
	do{
		printf("1. Press 1 for Bubble Sort\n");
		printf("2. Press 2 for Merge Sort\n");
		printf("3. Press 3 for Selection sort\n");
		printf("4. press 4 for Insertion Sort\n");
		printf("enter the choice :  ");
		scanf("%d",&choice);
	}while(choice>4);
	
	switch(choice)
	{
		int temp;
		case 1: printf("enter the no of elements you want in the array \n");
		scanf("%d",&m);
	
		printf("enter elements in Ist array\n");
 		for(i=0;i<m;i++)
		scanf("%d",&a[i]);
		
		for(i=0;i<m-1;i++)
		{
			for(j=0;j<m-1-i;j++)
			{
				if(a[j]>a[j+1])
				{
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;	
				}
			}
		}
		printf("Sorted array by Bubble sort is :\n");
		for(i=0;i<m;i++)
		printf("%d\n",a[i]);
		break;
		
		case 2:
				printf("enter no of elements yoy want in the array\n");
	scanf("%d", &n);						
	int *a=(int *)calloc(n, sizeof(int)); 
	printf("enter elements  in the array\n");
	for(i=0; i<n; ++i)
	{
		printf("%d: ", i+1); 
		scanf("%d", (a+i)); 
	}
	
	merge_sort(a, n); 	
	printf("Sorted array by Merge sort is :\n");											
	for(i=0; i<n; ++i)
	{
		printf("arr[%d] = %d\n", i, *(a+i)); 
	}
	break;
	case 3:
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
		break;	
		
		case 4:
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
				break;	
	}
}
void merge(int *a, int *left, int n, int *right, int m)
{
	int i, j, k; 
	i=j=k=0; 
	
	while(i<n && j<m)
	{
		if(left[i]<right[j])
		{
			a[k]=left[i]; 
			++i; ++k; 
		}
		
		else
		{
			a[k]=right[j]; 
			++k; ++j; 
		}	
	}
	
			while(i<n)
		{
			a[k]=left[i]; 
			++k; ++i;
		}
		while(j<m)
		{
			a[k]=right[j]; 
			++k; ++j; 
		}
}

void merge_sort(int *a, int n)
{
	int mid; 
	mid=n/2;
	if(n<2)
	return;  
	
	int *left=(int *)calloc(mid, sizeof(int)); 
	int *right=(int *)calloc(n-mid , sizeof(int)); 
	int i; 
	for(i=0; i<mid; ++i)
	{
		left[i]=a[i]; 
	}
	
	for(i=mid; i<n; ++i)
	{
		right[i-mid]=a[i];
	}
	
	merge_sort(left, mid); 
	merge_sort(right, n-mid); 
	merge(a, left, mid, right, n-mid); 
	free(left); 
	free(right); 	
}

