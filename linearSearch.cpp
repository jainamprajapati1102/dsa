#include <iostream>
#include <climits>
using namespace std;

int linearSearch(int arr[], int sz, int target)
{

    for (int i = 0; i < 7; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

void reverseArray(int arr[], int sz)
{
    int start = 0, end = sz - 1;

    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int sumProduct(int arr[], int sz)
{
    int sum = 0, product = 1;

    for (int i = 0; i < sz; i++)
    {
        sum += arr[i];
        product *= arr[i];
    }

    return product; //, product;
}

void swapMaxMin(int arr[], int sz)
{
    int max = 0, min = 0;
    int start = 0, end;

    for (int i = 1; i < sz; i++)
    {
        if (arr[i] > arr[max])
            max = i;
        if (arr[i] < arr[min])
            min = i;
    }

    int temp = arr[max];
    arr[max] = arr[min];
    arr[min] = temp;
}
int main()
{
    int target = 4, idx = -1, sz; // = 7;
    // cout << linearSearch(arr, sz, target) << endl;
    // reverseArray(arr, sz);
    // for (int i = 0; i < sz; i++)
    //     cout << arr[i] << " ";
    // cout << endl;
   
//    for 
    cout << "Enter the size of array:- ";
    cin >> sz;
    int arr[sz];
    for (int i = 0; i < sz; i++)
    {
        cin >> arr[i];
    }
    cout << "before swapping ";
    for (int i = 0; i < sz; i++)
        cout << arr[i] << " ";
    cout << endl;
    swapMaxMin(arr, sz);
    cout << "after swapping ";
    for (int i = 0; i < sz; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}

// WAF to calculate sum & product of all numbers in an array.
// WAF to swap the max & min number of an array.
// WAF to print all unique values in an array.
// WAF to print interaction of 2 arrays.