#include<stdio.h>

int Insertion_sort(int a[100],int n)
{
    int i , j ,temp;
    for (i = 1 ; i < n ;i ++)
    {
        temp = a[i];
        for(j = i - 1; j >= 0 && temp < a[j]; j--)
        {
            a[j+1] = a[j];
        }
        a[j+1] = temp;
    }

}
int main()
{
    int a[100];
    int N;
    printf("Enter The Array Size :");
    scanf("%d",&N);
    printf("Enter The %d Number in the Array :",N);
    for(int i = 0; i < N; i++)
    {
        scanf("%d",&a[i]);
    }


    Insertion_sort(a,N);

    printf("Sorted Array is :");
    for(int i = 0; i < N ; i++)
    {
        printf("%d   ",a[i]);
    }
}



/*SELECTION SORT 
#include<stdio.h>
int Selection_sort(int a[100],int n)
{
    int min, index, temp;
    for(int i = 0; i < n-1 ; i++)
    {
        min = a[i];
        index = i;
        for(int j = i + 1; j < n -1;j++)
        {
            if(min > a[j])
            {
                min = a[j];
                index = j;
            }
        }
        temp = a[i];
        a[i] = min;
        a[index] = temp;
        
    }
}

int main()
{
    int a[100];
    int N;
    printf("Enter The Array Size :");
    scanf("%d",&N);
    printf("Enter The %d Number in the Array :",N);
    for(int i = 0; i < N; i++)
    {
        scanf("%d",&a[i]);
    }


    Selection_sort(a,N);

    printf("Sorted Array is :");
    for(int i = 0; i < N ; i++)
    {
        printf("%d   ",a[i]);
    }
}

*/
/*
#include<stdio.h>
int main()
{
    int a[100];
    int i,n,temp,j,k;
    printf("Enter the range of the array :");
    scanf("%d",&n);

    printf("Enter %d Element in the Array ",n);
    for(i = 0; i < n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i = 0; i < n; i++)
    {
       for(j = 0; j <= n;j++)
       {
          if(a[j] > a[j+1])
            {
              temp = a[j];
              a[j] = a[j+1];
              a[j+1] = temp; 

            }
       }

    }

    printf("Sorted Array is :");
    for( k = 0 ; k < n; k++)
    {
        printf("%d",a[k]);
    }
}*/