#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int num[] = {22, 19, -2, -5, 9, 56, 14};
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int smallIdx;
    int larIdx;
    // cout << "size" <<  << endl;
    for (int i = 0; i < (sizeof(num) / sizeof(int)); i++)
    {
        // smallest = min(num[i], smallest);
        // largest = max(num[i], largest);

        if (num[i] < smallest)
        {
            smallest = num[i];
            smallIdx = i;
        }
        if (num[i] > largest)
        {
            largest = num[i];
            larIdx = i;
        }
    }

    cout << smallest << " is a smallest number at position on " << smallIdx << "\n ";
    cout << largest << " is a largest number at position on " << larIdx << "\n";
    return 0;
}