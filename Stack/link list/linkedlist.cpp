#include<iostream>
using namespace std;
#include<list>
class Stack{
    list<int> ll;
public :
    // Push element
    int push(int data){
        ll.push_back(data);
    }

    // Pop element 
    void pop(){
        if(ll.empty()) return;
        ll.pop_back();
    }

    // Top Element
    int peek(){
        cout << ll.back();
    }

    // Print
    void display(){
        for (int i : ll)
        {
            cout << i << "-->" ;
        } 
    }

    bool isEmpty(){
        return ll.empty();
    }

};

int main(){
    Stack l1;
    l1.push(11);
    l1.push(12);

    // l1.display();

    l1.peek();
    return 0;
}