#include <iostream>
using namespace std;

int isPalindrome(int x)
{
    int var;
    int original = x;
    int reverse = 0;
    while (x > 0)
    {
        var = x % 10;
        reverse = reverse * 10 + var;
        x /= 10;
    }

    if (reverse == original)
    {
        cout << "Number is palindrome";
    }
    else
    {
        cout << "Number is not palindrome";
    }
}

int main()
{
    int number;
    cout << "Enter a number: " << endl;
    cin >> number;

    isPalindrome(number);

    return 0;
}