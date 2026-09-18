#include<iostream>
#include<stack>
using namespace std;

class text
{
    stack<string> S;

    public:

    void write(string msg)
    {
        S.push(msg);
        cout<<" Message is : "<< msg<< endl;

    }

    void undo()
    {
        if (S.empty())
        {
            cout<<" No Message "<<endl;
            return;
        } 
        S.pop();
    }

    void display()
    {
       if (S.empty())
        {
            cout<<" No Message "<<endl;
        } 

        cout<< " Current text is : "<<S.top();
    }

};

int main()
{
    int choice;
    string texts;
    text T;

    do
    {
        cout<<" === Undo Feature in Text Editor ==="<<endl;
        cout<<" Enter 1 for Write Text "<<endl;
        cout<<" Enter 2 for Undo Last Action "<<endl;
        cout<< " Enter 3 for Display Current Text"<<endl;
        cout<<" Enter 4 for Exit"<<endl;

        cout<<" Enter your choice : ";
        cin>>choice;

        switch (choice)
        {
        case 1:
            cout<<" Enter The Text : ";
            cin>>texts;
            T.write(texts);
            cout<<endl;
            break;
        
        case 2:
            T.undo();
            cout<<endl;
            break;
        
        case 3:
            T.display();
            cout<<endl;
            break;
        
        case 4:
           cout<<"Exit..";
            cout<<endl;
            break;
        
        default:
        cout<<"Invailed choice "<<endl;
            break;
        }
    } while (choice!=4);
    
}