#include <iostream>
#include <vector>
using namespace std;

int minJumps(vector<int> &arr)
{
    int n = arr.size();
    // Edge case
    if (n == 1)
        return 0;
    if (arr[0] == 0)
        return -1;

    int step = 0;
    int x = 0;
    while (x < n)
    {
        x += arr[x];
        step++;
        if (x > n)
        {
            return step;
        }
        cout << "x" << x << endl;
        cout << "arr[x]" << arr[x] << endl;
        cout << "step" << step << endl;

        string a;
        cin >> a;
    }
    return -1; // If we cannot reach the last index, return -1
}

int main()
{
    vector<int> st;
    st.insert(st.end(), {1, 4, 3, 2, 6, 7}); // Adds all elements
    cout << endl;
    cout << "Dara   " << minJumps(st);
}