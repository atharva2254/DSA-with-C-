// Check whether the no. is binary or not
#include <iostream>
using namespace std;

int Bin_check(int num)
{
    int lastdig;
    int count = 0;
    while (num > 0)
    {
        lastdig = num % 10;

        if (lastdig != 0 && lastdig != 1)
        {
            count += 1;
        }
        num /= 10;
    }
    if (count == 0)
    {
        cout << "Binary number!";
    }
    else
    {
        cout << "Not a binary number.";
    }
}

int main()
{
    int bin_num;
    cout << "Check whether the is Binary or Not \n\n";
    cout << "Enter a Number: ";
    cin >> bin_num;

    Bin_check(bin_num);
}