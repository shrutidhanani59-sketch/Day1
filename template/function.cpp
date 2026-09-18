#include<iostream>
using namespace std;

template<typename T>
T add(T a, T b)
{
    return a+b;
}

template<typename T>
T factorial(T n, T fact)
{
    for(int i=1; i<=n; i++)
    {
       fact*=i; 
    }
    return fact;

}

int main()
{
    cout<<add(1,5)<<endl;
    cout<<factorial(5,1);
}