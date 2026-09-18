#include<iostream>
#include<stack>
#include<queue>
using namespace std;

    
void reverse( stack<int> &s,queue<int> &q )
{
    while(!q.empty())
    {
        s.push(q.front());
        q.pop(); 
    }

    while (!s.empty())
    {
        q.push(s.top());
        s.pop();
    }
    
}

int main()
{
    stack<int> s;
    queue<int> q;

    q.push(11);
    q.push(12);
    q.push(13);

   reverse(s,q);

   while(!q.empty())
   {
    cout<< q.front() << " ";
    q.pop();
   }


    
    
}