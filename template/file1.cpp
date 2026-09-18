#include <iostream>
using namespace std;


// Type 1 : Function Based
template <typename T>
T add(T a, T b)
{
    return a + b;
}


template <typename T>
T factorial(T n,T fact)
{
    for (int i = 1; i <= n; i++)
    {
        fact*=i;// = 1*1= 1*2 = 2
    }
    return fact;
}


// Type 2: Class Based
template <class T>
class file1{
public:
    T first;
};




int main()
{
    file1<int> f1;
    file1<float> f2;
    f1.first = 12;
    f2.first = 3.14;
    // cout<< add(1,2);
    // cout << factorial(5,1);
    cout << f2.first;

    return 0;
}
/*
    swich 
    fuction
        1 calculate
            1. multiple
            2. div

        2 prime
            12 ?
        3 even odd
            num
        4 print fullname 
            first,last

        5 class bio
            first,last,age,goal

        6 table 
            1>=   <=20 
        7 exit


        loop

*/