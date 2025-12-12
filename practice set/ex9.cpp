#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec = {2, 4, 4, 3, 2, 3, 6};
    int ans = 0;

    for (int val : vec)
    {
        ans = ans ^ val;
    }
    cout << ans << endl;

    return 0;
}
