#include<iostream>
using namespace std;
int main()
{
    int arr[5]={10,11,12,13,14};
    bool found= false;
    
    int val;
    cout<<"Enter the value of you found : ";
    cin>>val;

    for(int i=0; i<5; i++)
    {
        if(arr[i]==val)
        {
            cout<<"The element "<<val << "is on index no "<<i;
            found=true;
        }
    }
    if(found==false)
    {
        cout<<"Nahi mili";
    }



}