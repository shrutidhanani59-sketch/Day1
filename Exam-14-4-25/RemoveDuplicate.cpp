#include<iostream>
using namespace std;
int main()
{
    int arr[5]={10,2,12,5,2};
    int n=5;

    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]==arr[j])
            {
                for(int k=j; k<n-1; k++)
                {
                    arr[k]=arr[k+1];
                }
                n--;
                j--;
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}