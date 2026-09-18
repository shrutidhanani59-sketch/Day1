#include<iostream>
using namespace std;

class Myarr
{
   private:
        int size;
        int *arr;

    public:
        Myarr(int s)
        {
            size=s;
            arr=new int[s];

            if(arr!=NULL)
            {
                cout<<"Memory Allocated successfully"<<endl;
            }
            else
            {
                cout<<"Memory Allocation failed"<<endl;
            }

        }

        void addEle()
        {
            for(int i=0; i<size; i++)
            {
                cout<<" Enter the value for index"<< i << ":";
                cin>>arr[i];
            }

            cout<<" Element add Successfully" <<endl;
        }

        void see()
        {
            for(int i=0; i<size; i++)
            {
                cout<<" The Element on Index number "<< i << " is "<< arr[i]<< endl;
            }
        }

        void update( int poss, int value)
        {

            if(poss>=0 && poss<size)
            {
                arr[poss-1]=value;
                cout<<"Element updated";
            }
            else
            {
                cout<<" Position is not vaild ";
            }

        }

        void delet(int poss)
        {
            if(poss >=0 && poss<size)
            {
                for(int i=poss-1; i<size-1; i++ )
                {
                    arr[i]=arr[i+1];
                }
                size--;
                cout<<" Element deleted successfully : "<<endl;
            }
            else
            {
                cout<<" Position is not valid "<<endl;
            }
        }
};

int main()
{
    int num;
    cout<<" Enter the size of array: ";
    cin>>num;

    Myarr obj(num);
    while (true)
    {
        cout<<"Enter 1 to Add to array : "<<endl;
        cout<<"Enter 2 to view  to array :" << endl;
        cout<<"Enter 3 to update to array :" << endl;
        cout<<"Enter 4 to deleted to array :" << endl;

        int choice;
        cout<<" Enter your choice: ";
        cin>>choice;
        cout<<endl;

        switch(choice)
        {
            case 1:
            obj .addEle();

            break;

            case 2:
            obj .see();

            break;

            case 3:
            obj .update(2, 50);

            break;

            case 4:
            obj.delet(3);

            break;

        }
       
    }
    
}