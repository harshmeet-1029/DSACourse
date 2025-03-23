#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
There are brute, better and optimal solution exist



Optimal Solution
*/

int main()
{
    int k = 54944;
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};

    /*
            Since rotating an array of size n by n positions results in the same array, we can reduce k using modulo:

            k=k%n
            This ensures that k is always within the array size and avoids unnecessary rotations.

            Example Calculation
            Let’s assume:

            Array size (n) = 10

            Given k = 54944

            Reduce k:
            k=54944%10=4
            Instead of rotating 54944 times, we only need to rotate 4 times.

    */
    int n = nums.size();
    k = k % n;
    cout << k;
    /*
    The way to find the optimal solution is the reverse the whole array first

    Before Reversal
    Original: [1, 2, 3, 4, 5, 6, 7]

    After Reversal
    Reversed: [7, 6, 5, 4, 3, 2, 1]

    then remove the elements whcih are of k
    We reverse the first k = 3 elements of the reversed array.

    Before Reversing First k Elements
    [7, 6, 5, 4, 3, 2, 1]

    After Reversing First k Elements
    [5, 6, 7, 4, 3, 2, 1]

    We now reverse the last n-k = 4 elements ([4, 3, 2, 1]).

    Before Reversing Last n-k Elements
    [5, 6, 7, 4, 3, 2, 1]

    After Reversing Last n-k Elements
    [5, 6, 7, 1, 2, 3, 4]
    */

    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());

    for (int num : nums)
    {
        std::cout << num << " ";
    }
}
