#include<iostream>
#include<stack>
#include<queue>
using namespace std;

int main()
{
    stack<int> S1;
    stack<int> S2;
    queue<int> q1;

    S1.push(11);
    S1.push(12);

    S2.push(13);

    while(!S1.empty())
    {
        S2.push(S1.top());
        S1.pop();
    }

    while(!S2.empty())
    {
        q1.push(S2.top());
        S2.pop();
    }

    

    while(!q1.empty())
    {
        cout<< q1.front()<< " ";
        q1.pop();
    }


}