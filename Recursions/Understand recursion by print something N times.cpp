/*
When a function call itself is called recursion
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Complete this function
    void printNos(int n, int i = 0)
    {
        if (i > n)
            return;
        cout << i;
        printNos(n, i + 1);
    }
};

int main()
{

    Solution ob;
    // calling printNos() function
    ob.printNos(10);
    cout << "\n";

    cout << "~"
         << "\n";

    return 0;
}