#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
There are brute, better and optimal solution exist

Brute force approch

for (int i = 0; i < k; i++) {
    nums.insert(nums.begin(), nums[nums.size() - 1]); // Insert at beginning -> O(n)
    nums.pop_back(); // Remove last element -> O(1)
}


Why is it Brute Force?
Repeatedly moving elements → Every rotation takes O(n), leading to O(k * n), which is very slow for large k and n.

Does not leverage patterns → A rotation can be done efficiently in O(n), so an O(k * n) solution is overkill.






*/

int main()
{
    int k = 8;
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};

    /*
        Optimal Solution

        The main reason to do k=k%n is the check that which will be final roation after it completed one roating like
        my array size is 7 and lets take my k is 8
        so after 7 roation it will be same array
        and then i need to roate only once like
        7+1 = 8 so i need to rotate it only once

        if i do my k%n; then it will be

        k = 8
        n = 7

        7%8 = 1

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
