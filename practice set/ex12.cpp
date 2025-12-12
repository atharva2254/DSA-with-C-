#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int num)
{
    if (num < 2)
    {
        return false;
    }

    for (int i = 2; i < sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPrime(num))
    {
        cout << "Number is Prime";
    }
    else
    {
        cout << "Not a prime number";
    }
    return 0;
}
