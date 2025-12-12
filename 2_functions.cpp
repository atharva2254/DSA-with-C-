#include <iostream>
using namespace std;

int SumofDigit(int num)
{
    int digitsum = 0;

    while (num > 0)
    {
        int lastdigit = num % 10;
        num = num / 10;

        digitsum += lastdigit;
    }

    return digitsum;
}

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;
    cout << SumofDigit(num);
}