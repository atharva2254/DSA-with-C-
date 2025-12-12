#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int charFrequency(vector<char> &chars)
{
    int n = chars.size();
    int freq[26] = {0};
    for (int i = 0; i < n; i++)
    {
        freq[chars[i] - 'a']++;
    }

    for (int val : freq)
    {
        cout << val << " ";
    }
}

int charCounter(vector<char> &chars)
{
    int n = chars.size();
    for (int i = 0; i < n; i++)
    {
        int counter = 0;
        char ch = chars[i];
        while (i < n && chars[i] == ch)
        {
            i++;
            counter++;
        }
        cout << ch << ": " << counter << endl;
        i--;
    }
}

// for unsorted vector:
void charCounter1(vector<char> &chars)
{
    unordered_map<char, int> freq;

    for (char ch : chars)
    {
        freq[ch]++;
    }

    for (auto &it : freq)
    {
        cout << it.first << ": " << it.second << endl;
    }
}

int main()
{
    // vector<char> chars = {'a', 'b', 'c', 'b', 'e', 'a', 'b', 'c', 'd'};
    vector<char> chars2 = {'a', 'a', 'b', 'b', 'c', 'c', 'c', 'd', 'e'};

    // charFrequency(chars);
    // charCounter(chars);
    charCounter1(chars2 );
}