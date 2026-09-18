#include<iostream>
using namespace std;

template<class T>
class file 
{
    public:
     T first;
};

int main()
{
    file<int> f1;
    f1.first=12;
    cout<<f1.first;
}