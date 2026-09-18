#include<iostream>
using namespace std;

class Node
{
    public:
        int value;
        Node* next;

    Node(int data)
    {
        value= data;
        next= NULL;
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

    void push(int v)
    {
        Node* newnode = new Node(v);
        if(empty())
        {
            head = tail = newnode;
            cout<<" head = tail" <<endl;
        }
        else
        {
            tail->next= newnode;
            tail = newnode;
            cout<<" tail"<<endl;
        }
    }

    void pop()
    {
        if(empty()) return ;
        Node* temp= head;
        head= head->next;

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

      void rear()
    {
        if (empty())
            {
                cout << "Queue Empty";
                return;
            }
            
            cout << "Last Element :" << tail->value << endl; 
    }

      void size()
    {
        if (empty())
            {
                cout << "Queue Empty";
                return;
            }

            int count = 0;
            Node* temp= head;

            while (temp!= NULL)
            {
                count++;
                temp= temp->next;
            }
            
            
            cout << "Total Element :" <<  count<< endl; 
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
    q1.rear();
    q1.size();
}