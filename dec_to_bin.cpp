#include <iostream>
#include <cmath>
using namespace std;

int decToBinMeth1(int n)
{
    // division method
    int ans = 0;
    int i = 0;
    while (n > 0)
    {
        int bit = n % 2;
        ans = (bit * pow(10, i++)) + ans;
        n = n / 2;
    }
    return ans;
}

int decToBinMeth2(int n)
{
    // bitwise method
    int ans = 0;
    int i = 0;
    while (n > 0)
    {
        int bit = n & 1;
        ans = (bit * pow(10, i++)) + ans;
        n = n >> 1;
    }
    return ans;
}

int main()
{
    cout << endl;
    int decimalNumber;
    int quotient;

    cout << "Enter a decimal number: ";
    cin >> decimalNumber;

    cout << endl;

    int finalValue = decToBinMeth2(decimalNumber);
    cout << "Binary equivalent of decimal " << decimalNumber << " is " << finalValue << endl;
}