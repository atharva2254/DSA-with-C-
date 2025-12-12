// String Permutation Problem:

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
private:
    bool isFreqSame(int freq1[], int freq2[])
    {
        for (int i = 0; i < 26; i++)
        {
            if (freq1[i] != freq2[i])
            {
                return false;
            }
        }
        return true;
    };

public:
    bool checkInclusion(string s1, string s2)
    {
        int freq[26] = {0};

        for (int i = 0; i < s1.length(); i++)
        {
            freq[s1[i] - 'a']++;
        }

        int windSize = s1.length();

        for (int i = 0; i < s2.length(); i++)
        {
            int windIdx = 0, idx = i;
            int windFreq[26] = {0};

            while (windIdx < windSize && idx < s2.length())
            {
                windFreq[s2[idx] - 'a']++;
                idx++, windIdx++;
            }

            if (isFreqSame(windFreq, freq))
            {
                return true;
            }
        }
        return false;
    }
};

int main()
{
    Solution case1;
    Solution case2;
    Solution case3;
    string s11 = "abe", s21 = "eidbaooo";
    string s12 = "sfe", s22 = "askdjfasdkv";
    string s13 = "the", s23 = "awpnteh";
    cout << case1.checkInclusion(s11, s21) << endl;
    cout << case1.checkInclusion(s12, s22) << endl;
    cout << case1.checkInclusion(s13, s23) << endl;
}