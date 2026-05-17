//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution
{
public:
    vector<long long> factorialNumbers(long long n)
    {
        vector<long long> result;
        long long factorial = 1;
        int i = 1;
        while (factorial <= n)
        {
            result.emplace_back(factorial);
            i++;
            factorial *= i;
        }

        return result;
    }
};

//{ Driver Code Starts.
int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        // long long N;
        // cin >> N;
        Solution ob;

        vector<long long> ans = ob.factorialNumbers(3);
        for (auto num : ans)
        {
            cout << num << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends