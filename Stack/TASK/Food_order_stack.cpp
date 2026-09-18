#include<iostream>
#include<stack>
using namespace std;

class Food
{
   stack<string> F;
   
   public:

   void add(string order)
   {
     F.push(order);
     cout<<" Food is : "<<order<<endl;
   }

   void cancle()
   {
    if(F.empty())
        {
            cout<<" Order not availabele "<<endl;
        }
    F.pop();
    
   }

   void viewLast()
   {
   if(F.empty())
        {
            cout<<" Order not availabele "<<endl;
        }
    F.top();
   }

   void Display()
   {
   if (F.empty())
        {
            cout<<" No Message "<<endl;
        } 

        cout<< " Current text is : "<<F.top();
        
   }
};
int main()
{
    int choice;
    string order;
    Food F;

    do
    {
        cout<<" === Online Food Order Processing System using Array ==="<<endl;
        cout<<" Enter 1 for Add Order"<<endl;
        cout<<" Enter 2 for Cancel Last Order"<<endl;
        cout<<" Enter 3 for View Last Order"<<endl;
        cout<<" Enter 4 for Display All Orders"<<endl;
        cout<<" Enter 5 for Exit"<<endl;

        cout<<" Enter your choice ";
        cin>>choice;

        switch (choice)
        {
        case 1:
            cout<<"Enter your Order: ";
            cin>>order;
            F.add(order);
            cout<<endl;
            break;
        
        case 2:
            F.cancle();
            cout<<endl; 
            break;
        
        case 3:
            F.viewLast();
            cout<<endl; 
            break;
        
        case 4:
           F.Display();
            cout<<endl; 
            break;
        
        case 5:
           cout<<" Exit ..";
            cout<<endl; 
            break;
        
        default:
        cout<<"Invailed choice "<<endl;
            break;
        }
    } while (choice!=5);
    

}