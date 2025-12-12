/* Note: everytime we add new element the capacity of vector gets double */

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;
    vec.push_back(2);
    vec.push_back(4);
    vec.push_back(6);
    vec.push_back(8);
    vec.push_back(10);
    vec.push_back(12);
    vec.push_back(14);
    vec.push_back(16);
    vec.push_back(18);
    vec.push_back(20);
    vec.push_back(20);
    vec.push_back(20);
    vec.push_back(20);
    vec.push_back(20);
    vec.push_back(20);
    vec.push_back(20);
    vec.push_back(20);

    cout << "vector: " << " ";
    for (int val : vec)
    {
        cout << val << " ";
    }
    cout << endl;
    cout << "Size of vector: " << vec.size() << endl;
    cout << "Capacity of vector: " << vec.capacity() << endl;

    return 0;
}