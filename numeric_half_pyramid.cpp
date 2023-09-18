#include <iostream>
using namespace std;

int main()
{
    cout << endl;
    int noOfRows;

    cout << "No of rows: ";
    cin >> noOfRows;

    cout << endl;

    cout << "Pattern: " << endl;
    for (int row = 0; row < noOfRows; row++)
    {

        for (int col = 0; col < row + 1; col++)
        {
            cout << col + 1 << " ";
        }
        cout << endl;
    }
}