#include<iostream>
#include<vector>
using namespace std;

class plates
{
    vector<string> v;
public:
    void add(string plate)
    {
        v.push_back(plate);
        cout<<"Plate Add : "<< plate <<endl;
         
    }

    void remove()
    {

        if(v.empty())
        {
            cout<<" No Plate : ";
            return;
        }
        
         v.pop_back();

    }

    void showTop()
    {
       if(v.empty())
        {
            cout<<" No Plate : ";
            return;
        }

        cout<<" Top plate "<< v.back()<<endl; 

    }

    void Display()
    {
     for (string i : v)
     {
        cout<< i <<endl;
     }
    }
};

int main()
{

    int choice;
    string plate;
    plates p;

  do
  {
    cout<<"=== Railway Plate Storage System ==="<<endl;
    cout<<" Enter 1 for Add Plate "<<endl;
    cout<<" Enter 2 for Remove Plate "<<endl;
    cout<<" Enter 3 for Show Top Plate "<<endl;
    cout<<" Enter 4 for Display All Plates "<<endl;
    cout<<" Enter 5 for Exit "<<endl;

    cout<<" Enter your choice : ";
    cin>>choice;

    

    switch (choice)
    {
    case 1:
        cout<<" Enter Plate name: ";
        cin>>plate;
       p.add(plate);
       cout<<endl;
        break;

    case 2:
        
       p.remove();
       cout<<endl;
        break;
    
    case 3:
        
       p.showTop();
       cout<<endl;
        break;
    
    case 4:
        
       p.Display();
       cout<<endl;
        break;
    
    case 5:
        
       cout<<" Exit";
       cout<<endl;
        break;
    
    default:
    cout<<" Invailed choice ";
        break;
    }
  } while (choice!= 5);
}