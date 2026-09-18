#include<iostream>
using namespace std;

int main()
{
    int num;
    int *ptr;
    int **dptr;

    cout<<"Enter the number: ";
    cin>>num;

    ptr=&num;
    dptr=&ptr;

    if(*ptr>0)
    {
        cout<<"Number is positive";
    }
    else
    {
        cout<<"number is Nagitive";
    }
}