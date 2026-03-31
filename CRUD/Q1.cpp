#include<iostream>
using namespace std;
int main()
{
    int arr[20];
    int choice;
    int num;
    cout<<endl<<"Welcome";
    while(true)
    {
        
    cout<<endl<<"Enter 1 to creat an array ";
    cout<<endl<<"Enter 2 to read an array ";
    cout<<endl<<"Enter 3 to update an array ";
    cout<<endl<<"Enter 4 to delat an array ";
    cout<<endl<<"Enter 5 to exit an array ";

    cout<<endl<<"Enter your choice: ";
    cin>>choice;

    switch (choice)
    {
    case 1:
      cout<<"Enter number to add an array: ";
      cin>>num;
        if(num>0 && num<20)
        {
            for(int i=0; i<num; i++)
            {
                cout<<"Enter the element ";
                cin>>arr[i];
              
            }
              cout<<"array created successfuly";
        }
        else
        {
            cout<<"Invaild size";
        }

        break;
    case 2:
    cout<<endl<<"Element in array are: "<<endl;
    for(int i=0; i<num; i++)
    {
        cout<<arr[i]<<" ";
    }    
    
    default:
        break;
    }
    }
}