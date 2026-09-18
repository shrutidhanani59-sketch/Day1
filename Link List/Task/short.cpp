#include<iostream>
#include<list>
using namespace std;

int main()
{
    int choice;
    int value;
    list<int> linkedlist;

    do
    {
    bool find= false;
    bool flage= false;

    int position= 1;

    cout<<"Enter 1 to Insertstart"<<endl;
    cout<<"Enter 2 to Insertend"<<endl;
    cout<<"Enter 3 to Deletestart"<<endl;
    cout<<"Enter 4 to DeleteEnd"<<endl;
    cout<<"Enter 5 to Reverse"<<endl;
    cout<<"Enter 6 to Count"<<endl;
    cout<<"Enter 7 to Update"<<endl;
    cout<<"Enter 8 to Print"<<endl;
    cout<<"Enter 9 to Find Position"<<endl;
    cout<<"Enter 10 to Exit"<<endl;

    cout<<"Enter your choice";
    cin>>choice;

    switch (choice)
    {
    case 1:
    cout<<endl;
        cout<<"Enter the value : ";
        cin>>value;
        linkedlist.push_front(value);
        cout<<endl;
        break;

    case 2:
    cout<<endl;
        cout<<"Enter the value : ";
        cin>>value;
        linkedlist.push_back(value);
        cout<<endl;
        break;

    case 3:
    cout<<endl;
        if(!linkedlist.empty())
        {
            linkedlist.pop_front();
        }
        else
        {
            cout<<"value is not vailed";
        }
        cout<<endl;
        break;

    case 4:
    cout<<endl;
        if(!linkedlist.empty())
        {
            linkedlist.pop_back();
        }
        else
        {
            cout<<"value is not vailed";
        }
        cout<<endl;
        break;
    
    case 5:
    cout<<endl;
        linkedlist.reverse();
        cout<<endl;
        break;
    
    case 6:
    cout<<endl;
        
        cout<<endl;
        break;
    
    case 7:
    cout<<endl;
        int num;
        cout<<"Enter your choice: ";
        cin>>choice;
        cout<<"Enter the number: ";
        cin>>num;
        for (int x : linkedlist)
        {
            if(x==value)
            {
                x=num;
                flage=true;
            }   
        }
        if(!flage)
        {
            cout<<"value doesn't linkedlist";
        }
        
        
        cout<<endl;
        break;
    
    case 8:
    cout<<endl;
        
        cout<<endl;
        break;

    case 9:
    cout<<endl;
        int findposition;
        

        cout<<"Enter the number you find: ";
        cin>>findposition;

        for (int x : linkedlist)
        {
            if(x==findposition)
            {
                cout<<position;
            }
            position++;
        }
        
        cout<<endl;
        break;
    
    default:
        break;
    }

    } while (choice!=9);
    
}