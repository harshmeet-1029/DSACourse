//{ Driver Code Starts
#include <iostream>

using namespace std;

class Solution
{
public:
    // Function to count the number of digits in n that evenly divide n
    int evenlyDivides(int n)
    {
        // code here
        int j = n;
        int cnt = 0;
        while (j > 0)
        {
            int lastDigit = (int)j % 10;
            if (lastDigit != 0 && (int)(n % lastDigit) == 0)
            {
                cnt++;
            }
            j = (int)j / 10;
        }
        return cnt;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}