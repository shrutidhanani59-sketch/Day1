#include<iostream>
using namespace std;

int main()
{
    int arr[5]={1,-2,3,-4,5};
    int positive=0;
    int Nagitive=0;

    for(int i=0; i<5; i++)
    {
        if(arr[i]>0)
        {
            positive++;
        }
        else
        {
            Nagitive++;
        }
    }
    cout<<"Positive: "<<positive <<endl;
    cout<<"Nagitive: "<<Nagitive<<endl;
}