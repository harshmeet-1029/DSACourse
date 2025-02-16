#include <iostream>
#include <vector>
#include <algorithm> // Include this for std::sort

using namespace std;

bool comp(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second < p2.second)
        return true;

    /*
    p1{,5} > p2{ ,4} whcih is false then it will swap p1 with p2

     */
    if (p1.second > p2.second)
        return false;

    /*

    if they are same
     */
    if (p1.first > p2.first)
        return true;
    return false;
}

int main()
{
    /*

    How to sort something using inbuilt thing

    sort(<iterator of first address>, <iterator or last address>)
     */
    cout << "<=========================Sorting==================>" << endl;
    vector<int> ls;
    ls.push_back(23);
    ls.push_back(243);
    ls.push_back(22433);
    ls.push_back(12);
    ls.push_back(2223);
    ls.push_back(223);
    ls.push_back(22);
    ls.push_back(2);
    ls.push_back(213);
    ls.push_back(0);

    for (auto it : ls)
    {
        cout << it << " ";
    }
    cout << endl;
    cout << "<------------Sorting in asc------------>" << endl;
    // SORT IN ASC
    sort(ls.begin(), ls.end());

    for (auto it : ls)
    {
        cout << it << " ";
    }
    cout << endl;
    cout << "<------------Sorting in Desceding------------>" << endl;
    // SORT IN DEC
    sort(ls.begin(), ls.end(), greater<int>());
    for (auto it : ls)
    {
        cout << it << " ";
    }
    cout << endl;

    cout << "<------------Custom Sorting in asc------------>" << endl;
    //  SOrting it in my way or we can say custom
    //  Imagine i got value like
    pair<int, int> a[] = {{1, 2},
                          {2, 54},
                          {3, 1}};

    // Iterate through the array of pairs
    cout << "<------------Custom Sorting in before sorting------------>" << endl;
    for (auto its : a)
    {
        // Access the first and second elements of the pair
        cout << its.first << ":";   // Print first element
        cout << its.second << endl; // Print second element
    }

    cout << endl;

    // Sort it according to the second elemnt
    // if the secodn element is same , then sort
    // it according to the first element but in descending
    sort(a, a + 3, comp); // in 3rd elemnet we put the compare it is boolean function
    cout << "<------------Custom Sorting in After sorting------------>" << endl;
    for (auto its : a)
    {
        // Access the first and second elements of the pair
        cout << its.first << ":";   // Print first element
        cout << its.second << endl; // Print second element
    }

    cout << endl;

    cout << "<=========================Buildin popcount==================>" << endl;
    /* -----------------------==========Buildin popcount===============--------------------------- */
    /*
    It return the number of set bits in memeory like

    7 -> binary is 111 means there are 3 set bits
    6 -> it is 110 then it is 2 sets bits

     */
    int num = 7;
    int cnt = __builtin_popcount(num);
    cout << cnt;

    /*

    If there is long long int then this fucntions becomes
     */
    long long nums = 2334324234234324323;
    int cnts = __builtin_popcountll(nums);
    cout << endl
         << cnts << endl;
    /* -----------------------==========Permutations===============--------------------------- */

    string s = "123"; // Alwasy start permutation from sorted stuff
    do
    {
        cout << s << endl;

    } while (next_permutation(s.begin(), s.end()));

    /* -----------------------==========Find the max element===============--------------------------- */
    int maxi = *max_element(ls.begin(), ls.end()); // GIve first iterator and second iterarot and put * to print element
    cout << maxi;
}
