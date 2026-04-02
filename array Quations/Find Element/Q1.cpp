#include<iostream>
using namespace std;
int main()
{
    int arr[5]={10,12,10,12,5};
    bool found=false;

    int val;
    cout<<"Enter the value you found ";
    cin>>val;

    for(int i=0; i<5; i++)
    {
        if(arr[i]==val)
        {
            cout<<" The Element "<< val <<" is on index no "<<i <<endl;
            found=true;
        }
    }
    if(found==false)
    {
        cout<<"Nahi mili"<<endl;
    }
}