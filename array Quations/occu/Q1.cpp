#include<iostream>
using namespace std;
int main()
{
    int arr[5]={10,12,12,15,12};
    int count=0;

    int val;
    cout<<"Enter the value of you found : ";
    cin>>val;

    for(int i=0; i<5; i++)
    {
        if(arr[i]==val)
        {
            count++;
        }
    }
    cout<<"count is"<<count;
}