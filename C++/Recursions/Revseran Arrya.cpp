//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int pointer = 0;
    void reverseArray(vector<int> &arr)
    {
        if (arr.size() == 1)
        {
            return;
        }
        int n = arr.size();
        int value1 = arr[pointer];
        int value2 = arr[n - (pointer + 1)];
        arr[pointer] = value2;
        arr[n - (pointer + 1)] = value1;
        pointer += 1;
        if (pointer >= abs(n / 2))
            return;

        reverseArray(arr);
    }
};

//{ Driver Code Starts.
int main()
{
    int t = 1;

    while (t--)
    {
        vector<int> arr(100000);
        iota(arr.begin(), arr.end(), 1);
        // [5, 6, 2, 3, 4, 1]
        // string input;
        // getline(cin, input);
        // stringstream ss(input);
        // int number;
        // while (ss >> number)
        // {
        //     arr.push_back(number);
        // }

        Solution ob;
        ob.reverseArray(arr);
        cout << endl;
        for (int i = 0; i < arr.size(); i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends