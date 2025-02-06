#include <iostream>
#include <vector>
using namespace std;

vector<int> bruteForcePairSum(vector<int> nums, int target){
    
}

    int main()
{

    // your code here
    vector<int> arr = {2, 7, 11, 15};
    int n = 4;
    int target = 26;

    bruteForcePairSum(arr, target);

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] + arr[j] == target)
            {
                cout << "Two numbers that sum up to " << target << " are: " << arr[i] << " and " << arr[j] << " and their position are " << i << " and " << j << endl;
                return 0;
            }
        }
    }
    cout << "no pair sums are found";
    return 0;
}
