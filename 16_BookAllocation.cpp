#include <iostream>
#include <vector>

using namespace std;

bool isValid(vector<int> &books, int n, int m, int maxAllowedpages)
{
    int student = 1, pages = 0;

    for (int i = 0; i < n; i++)
    {
        if (books[i] > maxAllowedpages)
        {
            return false;
        }

        if (pages + books[i] <= maxAllowedpages)
        {
            pages += books[i];
        }
        else
        {
            student++;
            pages = books[i];
        }
    }

    return student > m ? false : true;
}

int bookAllocation(vector<int> &books, int n, int m)
{
    int sum = 0;
    if (m > n)
    {
        return -1;
    }

    for (int i = 0; i < n; i++)
    {
        sum += books[i];
    }

    int st = 0, end = sum;
    int ans = -1;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;

        if (isValid(books, n, m, mid))
        {
            end = mid - 1;
            ans = mid;
        }
        else
        {
            st = mid + 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> books = {2, 1, 3, 4};
    int n = 4, m = 2;
    cout << bookAllocation(books, n, m) << endl;
}