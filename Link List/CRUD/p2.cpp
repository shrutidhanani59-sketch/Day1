#include<iostream>
using namespace std;

//Node Structure : 
struct Node{
    int value;
    Node *next;
};
void insertStart(Node*& head,int data){
    Node* newNode = new Node();
    newNode->value = data;
    newNode->next = head;
    head = newNode;
}

void insertLast(Node*& head,int data){
    Node* newNode = new Node();
    newNode->value = data;
    newNode->next = NULL;

    Node* temp = head;
    if (temp == NULL){
        head = newNode;
        return;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode; 
}

void printData(Node* head){
    Node* temp = head;

    while(temp !=NULL){
        cout << temp->value << "-->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void deleteStart(Node*& head){
    if(head == NULL) return;

    Node* temp = head;
    if(temp->next == NULL){
        head = NULL;
        delete temp;
        return;
    }

    head = head->next;
    delete temp;
    return;
}

void deleteLast(Node*& head){
    if(head == NULL) return;

    Node* temp = head;
    if(head->next == NULL){
        head = NULL;
        delete temp;
        return;
    }

    while(temp->next->next != NULL){
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
    return;
}

void Reverse(Node*& head)
{
    if(head==NULL)
    {
        cout<<"NULL"<<endl;
        return;
    }
    Node*temp=head;
    Reverse(temp->next );
    temp = temp->next;
    
}

int main(){
    Node* head = NULL;

    
    insertStart(head,11);   
    insertStart(head,12);
    insertStart(head,13);
    insertLast(head,14);

    // printData(head);
    // deleteStart(head);
    // deleteStart(head);
    
    // printData(head);
    // deleteLast(head);
    // printData(head);
    Reverse(head);

}