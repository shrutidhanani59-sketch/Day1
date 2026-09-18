#include<iostream>
#include<string>
using namespace std;


class history
{
    string arr[100];
    int top = -1;

public:

 void newPage(string page)
    {
        if(top == 99)
        {
            cout<<"History is Full"<<endl;
            return;
        }

        top++;
        arr[top] = page;

        cout<<"Visited page: "<<page<<endl;
    }

 void goPage(string page)
 {
    if(top<= 0)
    {
        cout<<"Page is not available "<<endl;
        return;
    }

    cout<<" Back : "<<arr[top] <<endl;
    top--;
    cout<<" Current : " <<arr[top] <<endl;
 }

 void Display()
 {
    for(int i=0; i<=top; i++)
    {
        cout<<arr[i]<<endl;
    }
 }

};

int main()
{
    history H;
    string page;
    int choice;

  do
  {
      cout<<"Browser Back Button System:"<<endl;
    cout<<"Enter 1 for visit new page "<<endl;
    cout<<"Enter 2 for Go Back"<<endl;
    cout<<"Enter 3 for Display current history"<<endl;
    cout<<"Enter 4 for Exit"<<endl;

    
    cout<<" Enter your choice: ";
    cin>>choice;

    switch (choice)
    {
    case 1:
        cout<<" Enter page name: ";
        cin>>page;
        H.newPage(page);
        cout<<endl;

        break;

    case 2:
    H.goPage(page);
    cout<<endl;

    case 3:
    H.Display();
    cout<<endl;

    case 4:
    cout<<"Exit" <<endl;
    
    default:

    cout<<"Invaild Choice"<<endl;
        break;
    }
  } while (choice !=4);
  

    
}