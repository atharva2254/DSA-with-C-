#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isAlpaNumeric(char ch)
{
    if ((ch >= '0' && ch <= '9') || (tolower(ch) >= 'a' && tolower(ch <= 'z')))
    {
        return true;
    }
    return false;
}
bool isPalindrome(string s)
{
    int st = 0, end = s.length() - 1;

    while (st < end)
    {
        if (!isAlpaNumeric(s[st]))
        {
            st++;
            continue;
        }
        if (!isAlpaNumeric(s[end]))
        {
            end--;
            continue;
        }

        if (s[st] != s[end])
        {
            return false;
        }
        st++, end--;
    }
    return true;
}

int main()
{
    string name = "naya2sn";
    cout << isPalindrome(name);
}