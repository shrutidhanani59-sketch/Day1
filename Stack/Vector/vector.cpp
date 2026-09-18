#include<iostream>
#include<vector>
using namespace std;

class stack
{
    vector<int> v;


public:
    int push(int data)
    {
        v.push_back(data);
        cout<<"Added"<<endl;
    }
    
    void pop()
    {
        if(v.empty())
        {
           cout<<"Stack is empty ";
           return; 
        }
        v.pop_back();
    }

    void peek()
    {
        if(v.empty())
        {
           cout<<"Stack is empty ";
           return; 
        }
        cout<<" Top element "<< v.at(v.size()-1)<<endl;
    }

    void display()
    {
        for (int i : v)
        {
           cout<< i <<"-->"; 
        }
        
    }

    int size()
    {
        return v.size();
    }
};


int main()
{
    stack v1;
    v1.push(11);
    v1.push(12);
    v1.push(13);

    v1.display();
    v1.pop();
    v1.display();
    v1.peek();
    v1.display();

}