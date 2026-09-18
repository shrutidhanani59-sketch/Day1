#include<iostream>
using namespace std;

class student
{
    public:
     virtual void push(string value) = 0;
     virtual void pop() = 0;
     virtual void top() = 0;
     virtual void isempty() = 0;
     virtual void isfull() = 0;
};

class stack : public student
{
    private:
    string arr[5];
    int t = -1;

    public:
      void push(string value)
      {
        if(t == 4)
        {
            cout<<" Stack is full";
            return;
        }
        t++;
        arr[t]=value;
        cout<< "Element added successfully"<<endl;
      }

      void pop()
      {
        if(t == -1)
        {
            cout<<" stack is empty ";
            return;
        }
        cout<<" Remove : "<<arr[t]<< endl;
        t--;
      }

      void top()
        {
            if(t==-1)
            cout<<"Stack empty";
            else
            cout<<arr[t];
        }

      void isempty()
      {
        if(t == -1)
        {
            cout<<" stack is empty "<<endl;
        }
        else
        {
            cout<<" stack is not empty "<<endl;
        }
      }

      void isfull()
      {
        if(t==4)
        {
            cout<<" stack is full "<<endl;
        }
        else
        {
            cout<< " stack is not full "<<endl;
        }
      }
};

int main()
{
    stack s1 ;     
    

    int choice;
    string value;
    
    do
        {
       cout<<" WELCOME TO THE CODE "<<endl;
       cout<<"Enter 1 for push element"<<endl;
       cout<<"Enter 2 for pop element"<<endl;
       cout<<"Enter 3 for Display to top element"<<endl;
       cout<<"Enter 4 for empty stack"<<endl;
       cout<<"Enter 5 for full stack"<<endl;
       cout<<"Enter 6 for Exit"<<endl;

       cout<<" Enter your choice : ";
       cin>>choice;

       switch (choice)
       {
       case 1:
        // cout<<"Enter value:";
        // cin>>value;

        s1.push("shruti");
        s1.push("Hiral");
        s1.push("Rajal");
        s1.push("Ansi");
        s1.push("Dara");
        break;

        case 2:
            cout<<endl;
            s1.pop();
            cout<<endl;
            break;

        case 3:
            cout<<endl;
            s1.top();
            cout<<endl;
            break;
       
        case 4:
            cout<<endl;
            s1.isempty();
            cout<<endl;
            break;
       
        case 5:
            cout<<endl;
            s1.isfull();
            cout<<endl;
            break;
       
        case 6:
            cout<<endl;
            cout<<" Exit ...";
            cout<<endl;
            break;
       
       default:
       cout<<" Invaild choice "<<endl;
        break;
       }



        } while (choice!=6);


}