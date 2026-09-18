#include<iostream>
using namespace std;

class Food
{
   string arr[100];
   int top=-1;
   
   public:

   void add(string order)
   {
       if(top == 99)
        {
            cout<<"Order Stack Full"<<endl;
            return;
        }

        top++;
        arr[top] = order;

        cout<<"Order Added : "<<order<<endl;
   }

   void cancle()
   {
    if(top == -1)
        {
            cout<<"No Orders Available"<<endl;
            return;
        }

        cout<<"Cancelled Order : "<<arr[top]<<endl;
        top--;
   }

   void viewLast()
   {
    if(top == -1)
        {
            cout<<"No Orders Available"<<endl;
            return;
        }

        cout<<"Last Order : "<<arr[top]<<endl;
   }

   void Display()
   {
    if(top == -1)
        {
            cout<<"No Orders Available"<<endl;
            return;
        }

        for(int i=top; i>=0; i--)
        {
            cout<<arr[i]<<endl;
        }
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