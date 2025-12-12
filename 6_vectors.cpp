// Vectors is similar like arrays but are dynamic
/*
    Working:
        Everytime we add elements in a vector the capacity doubles
        eg: vec = {1,2}.
        Here capacity is of 2 then if we add another element capacity becomes 4.
*/

/* Vector Funtions:
    1. size: gives the size of vector, intialization: vec.size()
    2. push_back(): adds element in vector, intialization: vec.push_back(25);
    3. pop_back(): deletes last element of vector, init: vec.pop_back();
    4. front(): prints the first element of vector, init: vec.front();
    5. back(): prints last element of vector, vec.back();
    6. at(): gives the value of the index given, vec.at(0);
*/

#include <iostream>
#include <vector> // to use vector including vector is required
using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3};
    for (int val : vec)
    {
        cout << val << " ";
    }
    cout << endl;
    cout << "size of vector: " << vec.size() << endl;

    vec.push_back(6);
    vec.push_back(7);
    cout << "After push_back: " << endl;
    for (int val : vec)
    {
        cout << val << " ";
    }
    cout << endl;

    vec.pop_back();
    cout << "After pop_back: " << endl;
    for (int val : vec)
    {
        cout << val << " ";
    }

    return 0;
}