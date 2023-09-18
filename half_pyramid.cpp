#include <iostream>
using namespace std;

int main()
{
    int noOfRows;

    cout << "No of rows: ";
    cin >> noOfRows;

    cout << endl;

    for (int row = 0; row < noOfRows; row++)
    {

        for (int col = 0; col < row + 1; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}