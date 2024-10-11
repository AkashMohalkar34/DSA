#include<stdio.h>
void bs(int a[],int key, int N)
{
	int mid;
	int l = 0;
	int r = N -1;
	while(l <= r)
	{
		mid = ( l + r)/2;
		if(a[mid] == key)
		{
			printf("Element found at index %d ",mid + 1);
		}
		else if (a[mid] > key)
		{
			r = mid - 1;
		}
		else if (a[mid] < key)
		{
			l = mid + 1;
		}
		else
		{
			printf("Element Not found");
		}
	}
	if(l >= r)
	{
			printf("Element Not found");
	}
}

void main()
{
	int array[10];
	int N;
	int k,i;
	printf("Enter a Range of the Array");
	scanf("%d",&N);
	printf("enter %d element in the array ",N);
	for( i = 0; i < N ; i++)
	{
		scanf("%d",&array[i]);
	}
	
	printf("enter the if you want to be searched :\n");
	scanf("%d",&k);
	bs(array,k,N);
	
}
