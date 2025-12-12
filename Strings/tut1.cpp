#include <iostream>
using namespace std;

int main()
{
    // string str = "Coding camp";
    string str2;
    cout << "Enter the string: ";
    cin >> str2;
    cout << "String: " << str2 << endl;

    int lptr = 0, rptr = str2.length() - 1;
    while (lptr < rptr)
    {
        swap(str2[lptr], str2[rptr]);
        lptr++, rptr--;
    }

    cout << str2 << endl;
}