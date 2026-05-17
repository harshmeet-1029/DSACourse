#include <iostream>
#include <vector>
using namespace std;

bool isArraySorted(vector<int> &nums)
{
    int first = nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] <= first)
        {

            first = nums[i];
        }
        else
        {
            return false;
        }
    }
    return true;
}

int main()
{
    vector<int> arr = {7, 6, 5, 4, 3, 2, 2, 1, 0};
    vector<int> arr2 = {2, 1, 3, 4};
    cout << isArraySorted(arr);
}