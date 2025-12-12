#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec = {};
    int n = vec.size();
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int width = j - i;
            int height = min(vec[i], vec[j]);

            int area = width * height;

            ans = max(ans, area);
        }
        cout << endl;
    }
    cout << ans;
}