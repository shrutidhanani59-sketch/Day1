#include<iostream>
using namespace std;
int main()
{
    int arr[5]={10,5,8,23,40};

    for(int i=0; i<5; i++)
    {
        int key=arr[i];

        for(int j=i-1; j>=0; j--)
        {
            if(arr[j]>key)
            {
                arr[j+1]=arr[j];
                arr[j]=key;
            }
        }
    }

    for(int i=0; i<5; i++)
    {
        cout<<arr[i]<<" ";
    }
}