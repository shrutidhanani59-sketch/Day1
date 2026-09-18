#include<iostream>
using namespace std;

int main()
{
    int arr[5]={3,8,9,10,2};
    for(int i=0; i<5; i++)
    {
        int maxIndex=i;

        for(int j=i+1;j<5; j++ )
        {
            if(arr[j]<arr[maxIndex])
            {
                maxIndex=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[maxIndex];
        arr[maxIndex]=temp;
    }

    for(int i=0; i<5; i++)
    {
        cout<<arr[i]<<" ";
    }
}