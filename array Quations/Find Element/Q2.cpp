#include<iostream>
using namespace std;
int main()
{
    int arr[5]={10,11,12,13,14};
    bool find=false;

    int val;
    cout<<"Enter the value";
    cin>>val;

    for(int i=0; i<5; i++)
    {
        if(arr[i]==val)
        {
            cout<<"The element "<< val<< "Is on index no "<<i;
            find=true;
        }

    }
    if(find==false)
    {
        cout<<"Nahe mili";
    }
}