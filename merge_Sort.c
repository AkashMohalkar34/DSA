#include<stdio.h>
void merge(int a[],int beg,int mid,int end)
{
    int i, j, k;
    int n1 = mid - beg + 1;
    int n2 = end - mid ;
      
    int leftArray[n1]; int rightArray[n2];// temporary array. 

  /*copy data to temp array*/
  for(int i = 0; i < n1; i++)
  {
    leftArray[i] = a[beg + i];
  }

  for(int j = 0; j < n2; j++)
  {
    rightArray[j] = a[mid + j + 1];
  }


i = 0; // initial index of the first sub array.
j= 0 ; // initial index of the second sub array.
k = beg; // initial index of the merged array.

while(i < n1 && j < n2)
{
    if(leftArray[i]<=rightArray[j])
    {
        a[k] = leftArray[i];
        i++;
    }
    else
    {
        a[k] = rightArray[j];
        j++;

    }
    k++;
    while( i < n1)
    {
        a[k] = leftArray[i];
        i++;
        k++;
    }
    while(j < n2)

    {
        a[k] = rightArray[j];
        j++;
        k++;
    }
}
}

void merge_sort(int a[],int beg, int end)
{
   if(beg < end) 
    {
            int mid = (beg + end)/2;
    
            merge_sort(a,beg,mid);
            merge_sort(a,mid + 1,end);
            merge(a,beg,mid,end);
    
    }

}

void PrintArray(int a[],int n)
{
    int i; 
    for(i = 0; i < n; i++)
    {
        printf("%d   ",a[i]);
    }
}

int main()
{
   int a[10];
   int N;
   printf("Enter the Range Of The Array is :");
   scanf("%d",&N);
   printf("Enter %d Element In The Array \n",N);
   for(int i = 0; i < N; i++)
   {
    scanf("%d",&a[i]);
   }
   printf("\n Array is :");
   PrintArray(a,N);

   merge_sort(a,0,N-1);
   printf(" \n Sorted Array is :");
   PrintArray(a,N);
}