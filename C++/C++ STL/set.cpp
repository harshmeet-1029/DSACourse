#include <iostream>
#include <set>

using namespace std;

void displaySet(set<int> st)
{
    cout << endl;
    for (auto val : st)
    {
        cout << val << " ";
    }
    cout << endl;
}
int main()
{
    /*
set
It is used to store the collection of data
IT store the data in sorted order
it does not allow duplicate values


     */
    set<int> st;
    st.insert(1);  //{1}
    st.emplace(2); //{1,2}
    st.insert(2);  //{1,2,}
    st.insert(4);  //{1,2,4}
    st.insert(3);  //{1,2,3,4} store in sorted order
    st.insert(5);  //{1,2,3,4,5} store in sorted order
    displaySet(st);

    // begin(), end(),rbegin(),rend(),size() are same as vector

    //  FInding a value from set
    auto it = st.find(3); // it return us iterator
    cout << *(it);

    auto its = st.find(6); // s return us iterator which wil be st.end() so it return 5
    cout << endl
         << *(its);

    //  Erase a vlaue form set
    st.erase(5); // Erase the value from set (I CAN USE ELEMENT OR ADDRESS)
    displaySet(st);
    auto itsS = st.find(2);
    st.erase(itsS); // Erase the value from set (I CAN USE ELEMENT OR ADDRESS)
    displaySet(st);

    //  count is used to check how many times are there but as in set it is will be unique so it will return 1 if value exist and 0 if it does not
    int cnt = st.count(4);
    cout << endl
         << cnt;
    int cnts = st.count(6);
    cout << endl
         << cnts;

    /*
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1,it2);
     */

    /*

    1. lower_bound(key)
    Purpose: Finds the first element in the set that is not less than the specified key.
    Behavior: Returns an iterator pointing to the smallest element in the set that is greater than or equal to key.
    Example:
    For st = {1, 2, 3, 4} and key = 2, lower_bound(2) points to 2.
    For key = 0, it points to 1 (the smallest element greater than or equal to 0).
    For key = 5, it returns st.end() (no such element exists).
    2. upper_bound(key)
    Purpose: Finds the first element in the set that is greater than the specified key.
    Behavior: Returns an iterator pointing to the smallest element in the set that is strictly greater than key.
    Example:
    For st = {1, 2, 3, 4} and key = 2, upper_bound(2) points to 3.
    For key = 4, it returns st.end() (no element is strictly greater than 4).
    For key = 0, it points to 1.


     */
    // Lower bound
    auto itss = st.lower_bound(3);
    cout << endl
         << *(itss);
    // Upper bound
    auto its1 = st.upper_bound(1);
    cout << endl
         << *(its1);
}
