#include <iostream>
using namespace std;

void merge(int arr[], int low, int mid, int high)
{
    int temp[100];
    int i = low, j = mid + 1, k = 0;
    while (i <= mid && j <= high)
    {
        if (arr[i] <= arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
        }
    }

    while (i <= mid)
        temp[k++] = arr[i++];
    while (j <= high)
        temp[k++] = arr[j++];
    for (int x = 0; x < k; x++)
    {
        arr[low + x] = temp[x];
    }
}

void mergeshort(int arr[], int low, int high)
{
    if (low < high)
    {
        int mid = (low + high)/2;
        mergeshort(arr, low, mid);
        mergeshort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}

int main()
{
    int arr[5] = {10, 5, 2, 3, 8};
    int n = 5;

    mergeshort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
