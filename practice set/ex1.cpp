#include <iostream>
using namespace std;

// Reverse the number
int Rev_num(int num)
{
    int ans = 0;

    while (num > 0)
    {
        ans = ans * 10 + (num % 10);
        num /= 10;
    }
    return ans;
}
// Count the digits in a number
int Count(int num)
{

    if (num == 0)
        return 1;
    int count = 0;

    while (num > 0)
    {
        num /= 10;
        count += 1;
    }
    return count;
}

// Take out sum of the digits of a number
int Sum(int num)
{
    int sum = 0;
    int lastdig;
    while (num > 0)
    {
        lastdig = num % 10;
        sum = lastdig + sum;
        num /= 10;
    }
    return sum;
}

int main()
{
    int num;
    cout << "Enter Number: ";
    cin >> num;
    int reverse = Rev_num(num);
    cout << "Reversed no: " << reverse << endl;

    if (num == reverse)
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not Palindrome" << endl;
    }
    cout << "Count of numbers: " << Count(num) << endl;
    cout << "Sum of numbers: " << Sum(num) << endl;
    return 0;
}