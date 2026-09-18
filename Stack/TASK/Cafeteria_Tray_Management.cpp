#include<iostream>
#include<list>
using namespace std;

class tray
{
    list<string> T;

    public:

    void add(string tra)
    {

        T.push_back(tra);
        cout<<" Tray is "<< tra <<endl;

    }

    void remove()
    {
        if(T.empty())
        {
            cout<<" Tray is empty "<<endl;
            return;
        }
        T.pop_back();
    }

    void display()
    {
        for (string i : T)
        {
            cout<< i << endl;
        }
        
    }

    void count()
    {
    cout<<" Count is "<< T.size()<<endl;     
        
    }
};

int main()
{

    int choice;
    string plat;
    tray T;

    do
    {
        cout<<" === Cafeteria Tray Management ==="<<endl;
    cout<<" Enter 1 for Add Tray "<<endl;
    cout<<" Enter 2 for Remove Tray "<<endl;
    cout<<" Enter 3 for Display Tray Stack "<<endl;
    cout<<" Enter 4 for Count Total Trays "<<endl;
    cout<<" Enter 5 for Exit "<<endl;

    cout<<"Enter your choice : ";
    cin>>choice;

    switch (choice)
    {
    case 1:
        cout<<" Enter your Tray: ";
        cin>>plat;
        T.add(plat);
        cout<<endl;
        break;
    
    case 2:
        T.remove();
        cout<<endl;
        break;
    
    case 3:
       T.display();
        cout<<endl;
        break;
    
    case 4:
       T.count();
        cout<<endl;
        break;
    
    case 5:
        cout<<" Exit..";
        cout<<endl;
        break;
    
    default:
    cout<<" Invaild choice"<<endl;
        break;
    }
    } while (choice!=5);
    
}