#include <iostream>
using namespace std;

struct Node
{
    int value;
    Node *Next;
};

void InsertStart(Node *&head, int data)
{
    Node *newnode = new Node;
    newnode->value = data;
    newnode->Next = head;
    head = newnode;
}

void InsertEnd(Node *&head, int data)
{
    Node *newnode = new Node;

    newnode->value = data;
    newnode->Next = NULL;

    Node *temp = head;

    if (temp == NULL)
    {
        head = newnode;
        return;
    }

    while (temp->Next != NULL)
    {
        temp = temp->Next;
    }
    temp->Next = newnode;
}

void Printdata(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->value << " -->";
        temp = temp->Next;
    }
    cout << "NULL" << endl;
}

void Deletstart(Node *&head)
{
    if (head == NULL)
        return;

    Node *temp = head;
    if (temp->Next == NULL)
    {
        head = NULL;
        delete temp;
        return;
    }
    head = head->Next;
    delete temp;
    return;
}

void DeletEnd(Node *&head)
{
    if (head == NULL)
        return;
    Node *temp = head;
    if (head->Next == NULL)
    {
        head = NULL;
        delete temp;
        return;
    }

    while (temp->Next->Next != NULL)
    {
        temp = temp->Next;
    }
    delete temp->Next;
    temp->Next = NULL;
    return;
}
void Count(Node *head)
{
    Node *temp = head;
    int count = 0;

    while (temp != NULL)
    {
        count++;
        temp = temp->Next;

    }
    cout<<count<<endl;
    return;
}

int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "Welcome to the code: " << endl;
        cout << "Enter 1 for InsertStart" << endl;
        cout << "Enter 2 for InsertEnd" << endl;
        cout << "Enter 3 for DeletStart" << endl;
        cout << "Enter 4 for DeletEnd" << endl;
        cout << "Enter 5 for Reverse" << endl;
        cout << "Enter 6 for Count Element" << endl;
        cout << "Enter 7 for Exit" << endl;

        int choice;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<endl;


        switch (choice)
        {
        case 1:
       
            InsertStart(head, 11);
            InsertStart(head, 12);
            InsertStart(head, 13);
            Printdata(head);
            cout<<endl;
            break;

        case 2:
        
            cout<<endl;
            InsertEnd(head, 14);
            InsertEnd(head, 15);
            InsertEnd(head, 16);
            Printdata(head);
            cout<<endl;
            break;
        

        case 3:
        
            cout<<endl;
            Deletstart(head);
            Printdata(head);
            cout<<endl;
            break;
        

        case 4:
        
            cout<<endl;
            DeletEnd(head);
            Printdata(head);
            cout<<endl;
            break;
        

        case 6:
        
            cout<<endl;
            Count(head);
            cout<<endl;

        case 7:
        cout<<endl;
          cout<<"Exit...";
          cout<<endl;
        
        }
    }
}