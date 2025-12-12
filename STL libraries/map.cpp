/*
    1. Maps:
        It is basically an object of javascript,
        where a pair of key & value is stored, but in a sorted manner;
        The map function uses O(log n) time complexity for its operations;
        Initialization:
            map<string, int> mp;
        Operations:
            map.insert({key, value}) => To insert objects;
            map.emplace(key, value) => No need to insert as object;
            map.erase(key) => To erase the pair;
            map.find() => To find the value;
            size, empty.

    2. Multimaps:
        It is same like maps but duplicate values can be stored;
        Initialization:
            multimap<string, int> multi_map;

    3. Unordered Maps:
        It is also same like maps but data is unsorted.
        The major difference between unordered map and map is time comlexity.
        It takes O(1) tc for its operations
*/

#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main()
{
    map<string, int> mp;

    multimap<string, int> multi_map;

    unordered_map<string, int> un_map;
    mp["TV"] = 1299;
    mp["Mobile"] = 899;
    mp["Laptop"] = 2499;
    mp["Camera"] = 599;

    multi_map.emplace("TV", 1299);
    multi_map.emplace("TV", 1299);
    multi_map.emplace("TV", 1299);
    multi_map.emplace("TV", 1299);

    un_map.emplace("TV", 100);
    un_map.emplace("Watch", 100);
    un_map.emplace("Phone", 100);
    un_map.emplace("Laptop", 100);

    // for (auto p : mp)
    // {
    //     cout << p.first << " " << p.second << endl;
    // }

    // for (auto p : multi_map)
    // {
    //     cout << p.first << " " << p.second << endl;
    // }

    // for (auto p : un_map)
    // {
    //     cout << p.first << " " << p.second << endl;
    // }

    cout << un_map["TV"] << endl   // To get the value of TV;
         << un_map.size() << endl; // To print the size of map;
}