#include<iostream>
using namespace std;
int main()
{
    int arr[5]={2,5,9,10,15};
    int n=5;
    int max_leader=arr[n-1];

    cout<<"Leader is: "<<max_leader;

    for(int i=n-2; i>=0; i--)
    {
      if(arr[i]>max_leader)
      {
        max_leader=arr[i];
        cout<<max_leader<<" ";
      }
    }
}