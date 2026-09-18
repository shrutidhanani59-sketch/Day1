#include<iostream>
using namespace std;

struct  Node
{
    int value;
    int *next;
};

void insertStart(Node*& head, int data)
{
    Node* Newnode= new Node();
    Newnode->value= data; 

}
int main()
{
    Node* head=NULL;

    insertStart(head, 12);
}