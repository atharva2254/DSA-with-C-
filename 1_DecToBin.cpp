#include <iostream>
using namespace std;

int decToBinary(int num)
{
    int ans = 0, pow = 1;

    while (num > 0)
    {
        int rem;
        rem = num % 2;
        num = num / 2;

        ans += (rem * pow);
        pow *= 10;
    }

    return ans;
}

int main()
{
    int num = 1334;

    cout << decToBinary(num);

    return 0;
}