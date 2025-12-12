/*  Stack:

Stack works on Last In First Out principle;

Initialization:
    stack<int> st;

Stack structure:

    |  4  |
    |  3  |
    |  2  |
    |  1  |
    |_____|

Properties:
    stack.push() : To add element on top;
    stack.pop() : To remove element from top;
    stack.top() : To print top element;
    stack.size() : Shows the size of stack;
    stack.empty() : To check whether stack is empty;
    stack.swap(another_stack): Swaps all elements with another stack;
*/

#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> stack;

    stack.push(5);
    stack.push(7);
    stack.push(2);
    stack.push(1);
    stack.push(6);

    cout << "Stack Elements: \n";
    while (!stack.empty())
    {
        cout << stack.top() << endl;
        stack.pop();
    }
}