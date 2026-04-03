#include<iostream>
using namespace std;
int main()
{
    int arr[5]={10,12,15,12,14};

    for(int i=0; i<5; i++)
    {
        for(int j=i+1; j<5; j++)
        {
            if(arr[i]==arr[j])
            {
                cout<<"Duplicates "<< arr[i] <<" ";
            }
        }
    }
}