/*
    Sets:
        Set is similar to map but only single values are stored.
        Values are stored in sorted manner. (Ascending order)
        Duplicate values cannot be stored in sets.

    Initialization:
        set<int> st;
*/

#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> st;

    st.insert(2);
    st.insert(1);
    st.insert(4);
    st.insert(5);
    st.insert(3);

    st.insert(1); // Duplicates will not be inserted in set
    st.insert(2);
    st.insert(3);

    for (auto val : st)
    {
        cout << val << " ";
    }
}