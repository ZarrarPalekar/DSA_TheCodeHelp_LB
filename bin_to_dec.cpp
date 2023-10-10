#include <iostream>
#include <cmath>
using namespace std;

int binToDec(int n)
{
    int ans = 0;
    int i = 0;
    while (n > 0)
    {
        int bit = n % 10;
        ans = ans + bit * pow(2, i++);
        n = n / 10;
    }
    return ans;
}

int main()
{
    cout << endl;
    int binaryNumber;

    cout << "Enter a binary number: ";
    cin >> binaryNumber;

    cout << endl;

    int finalValue = binToDec(binaryNumber);
    cout << "Decimal equivalent of binary " << binaryNumber << " is " << finalValue << endl;
}