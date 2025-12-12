//  Reversing a string;

#include <iostream>
#include <algorithm>
using namespace std;

class StringOperation
{
public:
    string reverseString(string s)
    {
        int st = 0, end = s.length() - 1;
        while (st < end)
        {
            swap(s[st], s[end]);
            st++, end--;
        }

        cout << "Reverse String: " << s << endl;
    }
    // public:
    string reverseWords(string s)
    {
        reverse(s.begin(), s.end());

        string ans;
        for (int i = 0; i < s.length(); i++)
        {
            string word = "";
            while (s[i] != ' ' && i < s.length())
            {
                word += s[i];
                i++;
            }
            reverse(word.begin(), word.end());
            if (word.length() > 0)
            {
                ans += " " + word;
            }
        }
        cout << "Reverse Words: " << ans.substr(1) << endl;
    }
};

int main()
{
    string s2 = "hello world";
    cout << "Original String: " << s2 << endl;
    StringOperation operation1;
    operation1.reverseWords(s2);
    operation1.reverseString(s2);

    // cout << s2 << endl;
    // reverse(s2.begin(), s2.end());
    // cout << s2 << endl;
    // reverseString(s2);
}