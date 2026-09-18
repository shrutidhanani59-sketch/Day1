#include<iostream>
#include<vector>
using namespace std;
class Stack{
   vector<int> v;

public :
    // Push element
    int push(int data){
        v.push_back(data);
        cout << "Added" <<endl; 
    }

    // Pop element 
    void pop(){
        if (v.empty())
        {
            cout << "Stack is a Empty" <<endl;
            return;
        }
        v.pop_back();
            cout << "Element Removed" <<endl;

    }

    // Top Element
    void peek(){
        if (v.empty())
        {
            cout << "Stack is a Empty" <<endl;
            return;
        }
        cout << "Top Element : " << v.at(v.size()-1) << endl;
    }

    // Print
    void display(){
        for (int i : v)
        {
            cout << i << "-->" ;
        }
        
    }

    // Is Empty 
    bool isEmpty(){
        return v.empty();
    }

    // Size
    int totalsize(){
        return v.size();
    }

};

int main(){
    Stack v1;
    v1.push(11);
    v1.push(12);

    // v1.pop();
    // v1.pop();
    // v1.pop();
    // v1.display();
    // v1.peek();
    // cout << "is Empty : " << v1.isEmpty();

    cout  << "size of Stack :" << v1.totalsize();
    return 0; 
}
