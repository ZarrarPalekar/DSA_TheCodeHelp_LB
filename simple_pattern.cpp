/*
 * * * *
 * * * *
 * * * *
 * * * *
 */
#include <iostream>
using namespace std;

int main()
{
    int noOfRows;
    int noOfCols;

    cout << "No of rows: ";
    cin >> noOfRows;

    cout << "No of cols: ";
    cin >> noOfCols;

    cout << endl;

    for (int row = 0; row < noOfRows; row++)
    {

        for (int col = 0; col < noOfCols; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}