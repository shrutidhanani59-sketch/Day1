#include<iostream>
using namespace std;
int main()
{
    int arr[5]={5,8,3,0,6};

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5-1-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
   cout<<"Ascending: ";
    for(int i=0; i<5; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5-1-i; j++)
        {
            if(arr[j]<arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
   cout<<"Ascending: ";
    for(int i=0; i<5; i++)
    {
        cout<<arr[i]<<" ";
    }


}