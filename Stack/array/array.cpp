#include<iostream>
using namespace std;

class stack
{
    int arr[2];
    int top= -1;

    public:

    int push(int data)
    {
        if(top==(sizeof(arr)/sizeof(int))-1)
        {
           cout<<"Stack Overflow!!"<<endl;
           return -1; 
        }
        arr[++top]=data;
        cout<<"Data Added successfully"<<endl;
    }

    void pop()
    {
      top-=1;  
    }

    int pick()
    {
      cout<<arr[top];  
    }
    void display()
    {
        cout<<arr[1];
    }


};

int main()
{
    stack s1;
    s1.push(11);
    s1.push(12);
    s1.push(13);

    s1.pick();
    cout<<endl;
    s1.display();
    s1.pop();

}