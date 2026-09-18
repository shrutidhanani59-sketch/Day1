#include<iostream>

using namespace std;

class Node{
    public :
        int val;
        Node* next;

    Node(int data){
        val = data;
        next = NULL;
    }
};

class Queue{
    public : 
        Node* head;
        Node* tail;
        Queue(){
            // head = NULL;
            // tail = NULL;
            head = tail = NULL;
        }

        // Add a New Data 
        void push(int v){
            Node* newNode = new Node(v);
            if (empty())
            {
                head = tail = newNode;
                // cout << "Head==tail" << endl;
            }else{
                tail->next = newNode;
                tail = newNode;
                // cout << "tail" << endl;
            }
            
        }

        //Remove Data 
        void pop(){
            if(empty()) return;
            Node* temp = head;
            head = head->next;
            // cout << "deleted :" << temp->val  << endl;
            delete temp;
        }

        //Front Data
        void front(){
            if (empty())
            {
                cout << "Queue Empty";
                return;
            }
            //
            cout << "First Element :" << head->val << endl;
        }

        // is Empty
        bool empty(){
            return head==NULL;
        }
};



int main(){
    Queue q1;

    // cout << q1.empty();
    // q1.front();
    q1.push(11);
    q1.push(12);
    q1.push(13);

    // tail  head
    q1.pop();
    q1.pop();
    q1.pop();
    // q1.pop();

    q1.front();
    return 0;
}