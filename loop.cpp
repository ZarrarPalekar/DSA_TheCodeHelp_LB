#include <iostream>
using namespace std;

int main()
{
    // int i = 1;
    // for (; i <= 4;)
    // {
    //     if (i < 5)
    //         cout << i << endl;

    //     i++;
    // }

    // for (int row = 0; row < 5; row++)
    // {
    //     for (int col = 0; col < 5 - row; col++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    int noOfRows;
    int noOfCols;

    cout << "No of rows: ";
    cin >> noOfRows;

    cout << "No of cols: ";
    cin >> noOfCols;

    cout << endl;

    for (int row = 0; row < noOfRows; row++)
    {
        // for (int col = 0; col < row + 1; col++)
        // {
        //     cout << col + 1 << " ";
        // }
        // cout << endl;

        // for (int col = 0; col < noOfCols - row; col++)
        // {
        //     cout << col + 1 << " ";
        // }
        for (int col = 0; col < noOfCols; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}