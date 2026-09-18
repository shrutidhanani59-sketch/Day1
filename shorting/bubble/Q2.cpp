#include<iostream>
using namespace std;
int main()
{
    int arr[5]={10,5,6,3,8};

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5-1-i; j++)
        {
              if(arr[j]> arr[j+1])
              {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=arr[j];
              }
        }
    }

    for(int i=0; i<5; i++)
    {
        cout<<arr[i]<<" ";
    }
}