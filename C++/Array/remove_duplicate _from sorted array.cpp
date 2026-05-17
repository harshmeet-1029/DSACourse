#include <iostream>
#include <vector>
using namespace std;

/*
Input: nums = [1,1,2]
Output: 2, nums = [1,2,_]
Explanation: Your function should return k = 2, with the first two elements of nums being 1 and 2 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).


Brute force approch

in this what we can dad to create the set adn add teh array into the set adn then run the loop on set and add the values into the array

set<int> st;
for (i=0;i<n;i++){
st.insert(arr[i])
} // This take O(n log n)


index = 0
for (auto it:st){
arr[index] = it
index++;
} O(N)


Optimal Approch
Over here i need to apply the 2 pointer approch

The Two Pointer Approach is an efficient algorithmic technique used in problems involving searching, sorting, or optimization.
It involves using two pointers (or indices) to traverse data structures,
usually arrays or linked lists, in a specific manner to reduce time complexity.

How Does It Work?
Instead of using a nested loop (O(n²)), the two-pointer approach solves problems in O(n) or O(log n) time, making it much more efficient.

The pointers can be:

Left & Right Pointers → Used in sorted arrays for binary search, partitioning, or comparisons.

Fast & Slow Pointers → Used in linked lists to detect cycles or middle elements.


When to Use the Two Pointer Approach?
✔️ Sorted Arrays → Finding pairs, merging two sorted lists
✔️ Linked Lists → Detecting cycles, finding the middle node
✔️ Sliding Window Problems → Longest substring, shortest subarray
✔️ Partitioning & Searching → Binary search variations

<================================================================>
So in this question what we can do is use two pointer approach
keep the index over here as =0
where i which is first pointer pointing to the first element i=a[index]
and j is pointing to the second element which is j=[1]

if j ppoint is != to i then it should assing that value as a[index+1] and assing that number to the i and it should keep
on iterating over next element to preform the same action
*/

int main()
{
    vector<int> a = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int index = 0;

    for (int k = 1; k < a.size(); k++)
    {
        if (a[k] != a[index])
        {
            index++;
            a[index] = a[k]; // Same approch but over here it will add the
                             // item at the next index as i already increase the index by 1
        }
    }

    return index + 1;
}