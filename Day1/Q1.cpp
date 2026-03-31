#include<iostream>
using namespace std;
int main()
{
    int arr[20];
    int num;

    cout<<"Enter the number: ";
    cin>>num;

     if(num> 0 && num<20)
     {
        for(int i=0; i<num; i++)
     {
        cout<<"Enter the value : "<<i+1 << " ";
        cin>>arr[i];
     }
     cout<<"Element in arry are: ";
     for(int i=0; i<num; i++)
     {
        cout<<arr[i]<< " ";
     }
     }
     else
     {
        cout<<"Invalid value";
     }
     
}