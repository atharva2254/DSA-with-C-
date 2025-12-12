#include <iostream>
#include <vector>
#include <list>
#include <deque>
using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6};
    list<int> li = {11, 12, 13, 14, 15};
    deque<int> dq = {21, 22, 23, 24, 25};

    pair<int, int> p = {1, 5};
    vector<pair<int, int>> pairs_vector = {{1, 2}, {3, 4}, {5, 6}, {7, 8}, {9, 10}}; // This is how we can use pairs in vectors;

    pairs_vector.emplace_back(11, 12); // This add another pair in the end and in push_back we need to send a pair;
    pairs_vector.push_back({13, 14});
    for (pair<int, int> val : pairs_vector)
    {
        cout << val.first << " " << val.second << "\t";
    }

    // Iterators
    // for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
    // {
    //     cout << *(it) << " ";
    // }
    // cout << endl;
    // for (int val : li)
    // {
    //     cout << val << " ";
    // }

    // cout << endl
    //      << dq[3];
    // cout << p.first << endl
    //      << p.second;
}