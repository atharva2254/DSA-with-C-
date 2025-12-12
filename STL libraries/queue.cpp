/*
    Queue:
        Queue also have same properties as stack but works on principle:
        First In First Out

    Structure:
        -------------
        | 1  2  3  4
        -------------
*/

#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> que;

    que.push(4);
    que.push(2);
    que.push(7);
    que.push(3);

    cout << "Elements in Queue: " << endl;
    while (!que.empty())
    {
        cout << que.front() << " ";
        que.pop();
    }
}