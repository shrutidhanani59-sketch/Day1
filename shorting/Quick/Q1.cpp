#include<iostream>
using namespace std;


int partition(int arr[], int low, int high)
{
    int pivot=arr[high];
    int i=low-1;
    for(int j=low; j<high; j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    int temp=arr[i+1];
    arr[i+1]=arr[high];
    arr[high]=temp;
     return i + 1; 
}
void quicksort(int arr[], int low, int high)
{
    if(low<high)

    {
        int pi= partition(arr, low, high);
        quicksort(arr, low, pi-1);
        quicksort(arr, pi+1, high);

    }
}
int main()
{
    int arr[5]={10,5,2,3,0};
    int n=5;
    quicksort(arr, 0, n - 1);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}