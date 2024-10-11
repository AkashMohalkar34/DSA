#include<stdio.h>
#include<conio.h>
int linear_search(int a[],int n)
{
    int key;
    printf("Enter the key if you want to search");
    scanf("%d",&key);
    for(int i = 0; i < n;i++)
    {
        if(key == a[i])
        {
            return i;
        }
        else
        {
            printf("Key is not found.");
            break;
            return 0;
        }
    }
}
int main()
{
    int array[]={12,32,42,45,64,33};
    int size = sizeof(array);
    int search ;
    int result = linear_search(array,size);
    printf("the key index is : %d",result);

    getch();
}