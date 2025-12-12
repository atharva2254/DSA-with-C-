// Bitwise & (and):    Bitwise | (or):      Bitwise << (leftshift):                     Bitwise >> (rightshift)

// 0 & 0 = 0,           0 | 0 = 0,          a << b: the binary form of a is             a << b: a is shifted b spaces
// 0 & 1 = 0,           0 | 1 = 1,          shifted b spaces in left                    to right.
// 1 & 0 = 0,           1 | 0 = 1,          eg: 10 << 2: 1010 is shifted 2 spaces       eg: 10 << 2: 1010 = 0010
// 1 & 1 = 1            1 | 1 = 1           left: 101000 = 40                           It will occupy it's original space and will omit the remaining.

#include <iostream>
using namespace std;

int main()
{
    cout << (6 & 10) << endl; // Bitwise &: 0110 & 1010: 0010 = 2
    cout << (6 | 10) << endl; // Bitwise |(or): 0110 | 1010: 1110 = 14
    cout << (6 ^ 10) << endl;
    cout << (10 << 2) << endl; // a << b = a * 2^b
    cout << (10 >> 1) << endl; // a >> b = a / 2^b
}