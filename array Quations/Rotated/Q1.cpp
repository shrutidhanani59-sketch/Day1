#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};
    int k=2;
    int temp[5];
    for(int i=0; i<5; i++)
    {
        temp[(k+i)%5]=arr[i];
    }
    for(int i=0;i<5; i++)
    {
        arr[i]=temp[i];
    }
    for(int i=0; i<5; i++)
    {
        cout<<arr[i]<<" ";
    }

}