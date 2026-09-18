#include<iostream>
using namespace std;

template<typename calculate>
calculate mul(calculate A, calculate B )
{
    return A*B;
}

template<typename calculate>
calculate divide(calculate A, calculate B )
{
    return A/B;
}
template<typename even_odd>
even_odd re(even_odd num)
{
 
   for(int i=0; i<num; i++)
   {
    if(i%2==0)
    {
        cout<<i<<"is even"<<endl;
    }
    else
    {
        cout<<i<<" is odd"<<endl;
    }
   }
}
template<typename prime>
prime value(prime num)
{
    int i;
    while(n1==i)
    {

        if(num<=1)
        {
            count++
        }
        i++;
    }
    if(n1/i==0)
    {
        cout<<"Number is Prime:";
    }
    else
    {
        cout<<"Number is Not Prime:"
    }
}
template<typename Full_name>
Full_name F(Full_name Name, Full_name Surname)
{
   return Name , Surname;
}


int main()
{
    cout<<"Welocme to the code:"<<endl;
    cout<<"Enter 1 for calculate"<<endl;
    cout<<"Enter 2 for prime number"<<endl;
    cout<<"Enter 3 for even odd"<<endl;
    cout<<"Enter 4 for Full Name"<<endl;
    cout<<"Enter 5 for print Bio"<<endl;
    cout<<"Enter 6 for Print Table"<<endl;
    cout<<"Enter 7 for Exit"<<endl;

    int choice;
    cout<<"Enter Your Choice:";
    cin>>choice;

    switch (choice)
    {
    case 1:
{
    int A;
    int B;

    cout<<"Enter the value of A: ";
    cin>>A;

    cout<<"Enter the value of B: ";
    cin>>B;

     cout<<endl<<"Enter 1 to multicaption: "<<endl;
     cout<<"Enter 2 to Divied: "<<endl;
    int ch;
    cout<<"Enter your choice: ";
    cin>>ch;

    switch(ch)
    {
        case 1:
        cout<<"Multicaption :"<<A*B<<endl;
        break;
        case 2:
        cout<<"Divied :"<<A/B<<endl;
    }
    break;
}
  case 2:
   {
     int arr[5];
    int num=5;
   for(int i=0; i<num; i++)
   {
    cout<<"Enter the value for element number:"<<i+1<<" = ";
    cin>>arr[i];
   }
   cout<<endl<<"Element is: "<<endl;
   for(int i=0; i<num; i++)
   {
    cout<<arr[i]<<endl;
   }
   cout<<value(num);
   } 

  case 3:
  {
    int arr[5];
    int num=5;
   for(int i=0; i<num; i++)
   {
    cout<<"Enter the value for element number:"<<i+1<<" = ";
    cin>>arr[i];
   }
   cout<<endl<<"Element is: "<<endl;
   for(int i=0; i<num; i++)
   {
    cout<<arr[i]<<endl;
   }
   cout<<endl<<"Even-Odd"<<endl;
   for(int i=0; i<=num; i++)
   {
    cout<<re(arr[i]);
   }
    break;
  }

  case 4:
  {
    string Name;
    string Surname;

    cout<<"Enter the Name: ";
    cin>>Name;

    cout<<"Enter the Surname: ";
    cin>>Surname;

    cout<<Name << " "<< Surname;

    break;
    
  }  
 

}
}