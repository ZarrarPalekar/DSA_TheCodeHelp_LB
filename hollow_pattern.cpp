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

    int firstRow, firstCol = 0;
    int lastRow = noOfRows - 1;
    int lastCol = noOfCols - 1;

    for (int row = 0; row < noOfRows; row++)
    {

        for (int col = 0; col < noOfCols; col++)
        {
            if (firstRow == row || firstCol == col || lastRow == row || lastCol == col)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}