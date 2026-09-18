#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,-2,3,-4,5};

    for(int i=0; i<5; i++)
    {
        if(arr[i]>0)
        {
            cout<<arr[i]<< " is positive"<<endl;
        }
        else
        {
            cout << arr[i]<< " is  Nagitive  "<<endl;
        }
    }
}