#include<iostream>
using namespace std;

class Node
{
    public:
        int value;
        Node* next;

    Node(int data)
    {
        value = data;
        next = NULL;
    }
};

class Queue
{
    public:
    Node* head;
    Node* tail;

    Queue()
    {
        head = tail = NULL;
    }

    void push( int  v)
    {
        Node* newnode = new Node(v);

        if(empty())
        {
            head = tail = newnode;
        }
        else
        {
            tail->next= newnode;
            tail= newnode;
        }
    }

    void pop()
    {
        if(empty()) return ;
        Node* temp = head;
        head = head->next;
        delete temp;

    }

    void front()
    {
        if (empty())
            {
                cout << "Queue Empty";
                return;
            }
            
            cout << "First Element :" << head->value << endl; 
    }

    bool empty()
    {
        return head == NULL;
    }
};

int main()
{
    Queue q1;
    q1.push(11);
    q1.push(12);
    q1.push(13);

    q1.pop();

    q1.front();

    return 0;

}