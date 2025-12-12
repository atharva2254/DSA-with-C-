#include <iostream>

using namespace std;

int main()
{
    string str = "Hello";
    string ans;

    for (int i = str.length() - 1; i >= 0; i--)
    {
        ans += str[i];
    }
    cout << ans;

    return 0;
}