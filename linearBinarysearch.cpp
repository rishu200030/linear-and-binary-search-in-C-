#include <iostream>

using namespace std;
int linearsearch(int arr[], int size, int ele)
{
    cout << "Linear Search" << endl;
    int status = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == ele)
        {
            cout << "The element " << ele << " is found at index position " << i << endl;
            status = 1;
        }
    }
    if (status == 0)
    {
        cout << "Element is not present in array" << endl;
    }
    return 1;
};

int binarysearch(int arr[], int size, int ele)
{
    cout << "Binary search" << endl;
    int low = 0;
    int high = size - 1;
    int mid, status = 0;
    while (low <= high)
    {
        mid = (high + low) / 2;
        if (arr[mid] == ele)
        {
            cout << "The element " << ele << " is found at index position " << mid << endl;
            status = 1;
        }
        if (arr[mid] < ele)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    if (status == 0)
    {
        cout << "Element is not present in array" << endl;
    }
    return 1;
};
int main()
{
    int arr[20] = {12, 23, 34, 45, 56, 67, 78, 89, 90};
    int size, capacity;
    capacity = sizeof(arr) / sizeof(int);
    size = 9;
    int ele = 89;
    cout << "The array sorted is : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    linearsearch(arr, size, ele);
    binarysearch(arr, size, ele);
    return 0;
}