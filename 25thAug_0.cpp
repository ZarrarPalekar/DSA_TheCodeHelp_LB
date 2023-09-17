#include <iostream>
using namespace std;

string returnString(int num)
{
    return num == 1 ? " byte" : " bytes";
}

int main()
{
    int a = 5;
    float b = 5.5;
    char c = 'a';
    string d = "Hello";
    bool e = true;

    /**
     * The sizeof is a keyword, but it is a compile-time operator
     * that determines the size, in bytes, of a variable or data type.
     *
     */
    printf("size tester\n\n");
    cout << "Size of int: " << sizeof(a) << returnString(sizeof(a)) << endl;
    cout << "Size of float: " << sizeof(b) << returnString(sizeof(b)) << endl;
    cout << "Size of char: " << sizeof(c) << returnString(sizeof(c)) << endl;
    cout << "Size of string: " << sizeof(d) << returnString(sizeof(d)) << endl;
    cout << "Size of bool: " << sizeof(e) << returnString(sizeof(e)) << endl;
    cout << "Size of short int: " << sizeof(short int) << returnString(sizeof(short int)) << endl;
    cout << "Size of long int: " << sizeof(long int) << returnString(sizeof(long int)) << endl;
    cout << "Size of double: " << sizeof(double) << returnString(sizeof(double)) << endl;
    cout << "Size of wchar_t: " << sizeof(wchar_t) << returnString(sizeof(wchar_t)) << endl;
}