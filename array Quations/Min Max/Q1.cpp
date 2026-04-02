#include<iostream>
using namespace std;
int main()
{
    int arr[5]={10,11,12,13,14};
    int min=arr[0];

    for(int i=0; i<5; i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    cout<<min<<endl;
//    max element

    int max=arr[0];

    for(int i=0; i<5; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    cout<<max<<endl;
}