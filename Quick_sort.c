
#include<stdio.h>
void quick_sort(int a[],int N)
{
    int beg ;
    int end ;
    int pivot;

    int top = -1;
    int lower[10];
    int upper[10];
    if(N > 1)
    {
        top++;
        lower[top] = 0;
        upper[top] = N - 1;
    }
    while(top != -1)
    {
       
       beg = lower[top];
       end = upper[top];
       top--;

      pivot = quick(a,beg,end,pivot);
     if(beg < pivot -1)
     {
        top++;
        lower[top] = beg;
        upper[top] = pivot - 1;

     }
     if(end > pivot + 1)
     {
        top++;
        lower[top] = pivot + 1;
        upper[top] = end;
     }
    }
    

    
}

int quick(int a[],int beg,int end,int pivot)
{
    int left,right,temp;
    left = beg;
    right = end;
    pivot = left;

   step1:
     while(pivot != right && a[right] >= a[pivot])
    {
        right--;
    }
    if(pivot == right  )
    {
        return pivot;
    }
    if(a[pivot] > a[right])
    {
        temp = a[pivot];
        a[pivot] = a[right];
        a[right] = temp;
        pivot = right;
    }



    while(pivot != left && a[left] <= a[pivot])
    {
        left++;
    }
    if( pivot == left )
    {
        return pivot;
    }
    if(a[pivot] < a[left])
    {
        temp = a[pivot];
        a[pivot] = a[left];
        a[left] = temp;
        pivot = left;
    }
  goto step1;

}
int main()
{
    int a[20];
    int N;
    printf("Enter the range of the array :");
    scanf("%d",&N);
    printf("Enter %d Nunber in the Array ",N);
    for(int i = 0; i < N; i++)
    {
	scanf("%d",&a[i]);
	}
    quick_sort(a,N);
    
    printf("Sorted Array :");
    for(int i = 0; i < N; i++)
    {
	printf("%d   ",a[i]);
	}
}