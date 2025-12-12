#include <iostream>
#include <vector>
using namespace std;

int linearSearch(vector<int> &arr, int x)
{

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == x)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int X;
    cout << "Enter number to search: ";
    cin >> X;

    vector<int> arr = {24, 65, 42, 90, 33, 21};

    int ls = linearSearch(arr, X);

    if (ls == -1)
    {
        cout << "Not Found!" << endl;
    }
    else
    {
        cout << "Found at index: " << ls;
    }
}