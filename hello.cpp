#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter a number for check prime or not:-";
    cin >> n;
    bool isPrime = true;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
    {
        cout << n << " is Prime number";
    }
    else
    {
        cout << n << " is not Prime number";
    }
    return 0;
}
