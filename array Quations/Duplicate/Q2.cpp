#include<iostream>
using namespace std;
int main()
{
    int arr[5]={10,12,13,15,12};
    
    for(int i=0; i<5; i++)
    {
        for(int j=i+1; j<5; j++)
        {
            if(arr[i]==arr[j])
            {
                cout<<"Duplicate is : " <<arr[i];
            }
        }
    }

}