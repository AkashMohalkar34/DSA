#include<stdio.h>
int main()
{
   int a[100];
   int min,temp,index,N ;
   printf("Enter the range of the array :");
   scanf("%d",&N);
   printf("Enter the %d numbers :",N);
   for(int i = 0; i < N ;i++)
   {
    scanf("%d",&a[i]);
   }
   
   for(int i = 0 ;i < N;i++)
   {
    min = a[i];
    index = i;
    for(int j = i + 1; j < N-1;j++)
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
printf("sorted array :");
for(int i = 0; i< N; i++)
{
    printf("%d   ",a[i]);
}

}