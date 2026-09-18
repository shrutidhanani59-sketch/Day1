#include<iostream>
using namespace std;
int main()
{
    int arr[5]={10,12,14,53,5};
    int n=5;
    int max_element= arr[n-1];
    cout<<"Leader is : "<<max_element << " ,   ";

    for(int i = n-2; i>0; i--)
    {
       if(arr[i]>max_element)
       {
        max_element=arr[i];
        cout<<max_element;
       } 
    }
}