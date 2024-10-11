
// BUBBLE SORT 
#include<iostream>
using namespace std;

void bubble_sort(int a[100],int N)
{
    for(int i = 0 ; i < N -1 ;i++)
    {
        for(int j = 0; j < N - 1;j++)
        {
            if(a[j] > a[j + 1])
            {
                int t;
                t = a[j];
                a[j] = a[j+1];
                a[j + 1] = t;
            }
        }
    }
    printf("sorted array is :");
    for(int i = 0; i<N;i++)
    {
       cout<<a[i]<<"  ";
    }

}
int main()

{
    int a[100],N;
    cout<<"Enter a range :"<<endl;
   cin>>N;
    cout<<"Enter the "<<N<<"Number"<<endl;
    // printf("Enter the %d number :",N);
    for(int i = 0 ; i < N ;i++)
    {
        cin>>a[i];
        // scanf("%d",&a[i]);
    }


    
}
