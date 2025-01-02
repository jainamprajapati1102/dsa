#include <iostream>
using namespace std;

// binary to decimal
int binary(int decNum)
{
    int pow = 1, ans = 0;

    while (decNum > 0)
    {
        int rem = decNum % 2;
        decNum /= 2;
        ans += (rem * pow);
        pow *= 10;
    }
    return ans;
}

int decimal(int biNum)
{
    int pow = 1, ans = 0;

    while (biNum > 0)
    {
        int rem = biNum % 10;
        biNum /= 10;
        ans += (rem * pow);
        pow *= 2;
    }
    return ans;
}

int main()
{
    int decNum = 50;

    // for (unsigned int i = 1; i <= 2000; i++)
    // {
    //     cout << i << "=>" << binary(i) << endl;
    // }

    // cout << binary(decNum) << endl;

    // cout << decimal(binary(decNum)) << endl;
    // cout << sizeof(signed int) << endl;

    // number is power of 2  or not
    // 1
    int n = 32;
    // for(int i=1;i>n)
    if ((n > 0) && (n & (n - 1))==0)
    {
        cout << n << " is power of 2\n";
    }
    else
    {
        cout << n << " is not power of 2\n";
    }
}