/*
    Priority Queue:
        Priority is a tree like stack which works and gives priority to highest number, i.e. Highest number is on top. Priority queue is always sorted.
        initialization: priority_queue<int> queue;
*/

#include <iostream>
#include <queue>
using namespace std;

int main()
{
    priority_queue<int> prio_que;

    prio_que.push(5);
    prio_que.push(3);
    prio_que.push(10);
    prio_que.push(4);

    cout << "All elements of priority queue: " << endl;
    while (!prio_que.empty())
    {
        cout << prio_que.top() << " ";
        prio_que.pop();
    }
}