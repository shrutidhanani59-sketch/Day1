#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,2,1};
    bool status= true;

    for(int i=0; i<5/2; i++)
    {
        if(arr[i]!=arr[4-i])
        {
            status=false;
        }
    }

    if(status==true)
    {
        cout<<"Palindrom";
    }
    else
    {
        cout<<"Not Palindrom";
    }
}