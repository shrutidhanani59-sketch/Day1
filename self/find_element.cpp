#include<iostream>
using namespace std;
int main()
{
    int arr[5]={10,12,15,14,15};
    int count=0;

    int value;
    cout<<"Enter the value: ";
    cin>>value;
    
    for(int i=0; i<5; i++)
    {
        if(arr[i]==value)
        {
            count++;
        }
    }
    cout<<"Count: "<< count;
}