#include<iostream>
using namespace std;
int main()
{
    int a[20];
    int temp , N,i,j;
    cout<<"Enter the range of the array :";
    cin>>N;
    cout<<"Enter the " <<N <<" number :";
    for(int i = 0; i < N ; i++)
    {
        cin>>a[i];
    }

    for(i = 1 ; i <= N ;i++)
    {
        temp = a[i];
        for( j = i - 1; j >= 0 && temp < a[j];j--)
        {
           a[j+1] = a[j];

        }
        a[j+1] = temp;
    }

cout<<"sorted array is :";
for( int k = 0; k < N ;k++)
{
    cout<<a[k]<<"      ";
}
}