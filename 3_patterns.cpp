#include <iostream>
using namespace std;

int main()
{
    // int n = 4;
    // for (int i = 0; i < n; i++)
    // {
    //     char ch = 'A';
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << ch << " ";
    //         ch += 1;
    //     }
    //     cout << endl;
    // }
    // return 0;

    int n = 4;
    int num = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << num << " ";
        }
        num++;
        cout << endl;
    }
    return 0;
}