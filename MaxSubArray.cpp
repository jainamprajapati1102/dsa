#include <iostream>
#include <climits>
using namespace std;

void PrintSubArray()
{
    int n = 8;
    int a[8] = {4, 3, 9, 1, 8, 5, 2, 8};
    cout << "sum of all possible subarray\n";
    for (int st = 0; st < n; st++)
    {
        int curSum = 0, maxSum = INT_MIN;
        for (int end = st; end < n; end++)
        {
            for (int i = st; i <= end; i++)
            {
                // curSum += a[i];
                // maxSum = max(curSum, maxSum);
                cout << a[i];
            }
            cout << " ";
        }

        cout << endl;
    }
}

int SumOfArray()
{
    int n = 9;
    int arr[9] = {5, 4, -1, 7, 8};
    int curSum = 0, maxSum = INT_MIN;

    cout << "sum of all possible subarray\n";
    for (int st = 0; st < n; st++)
    {
        curSum += arr[st];
        maxSum = max(curSum, maxSum);
        // cout << "cur sum of subarray" << arr[st] << curSum << endl;
        if (curSum < 0)
        {
            curSum = 0;
        }
    }
    return maxSum; // << endl;
}

// WAF for find possible Subarray from array
int main()
{
    // PrintSubArray();
    cout << "maximum sum of subarray:->" << SumOfArray() << endl;
}