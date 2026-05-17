#include <iostream>
#include <vector>

using namespace std;
/*

We always have

Brute soluction

Better Solution

Optimal Solution

if i have  array of 5 elements like

a[5] = [3,2,1,5,2]

I can apply brute force whcih means i can sort it and then find the last element

but sorting's
TC -> O(n log n) -> so we brute force it has TC of O(n log n)
SC -> O(1)



Optimal solution ->  I can store the first element in the varables and then i can find the largest element from it like


a[5] = [3,2,1,5,2]
I take varable like  largest=a[0] lets assume that the first elemnet is the largest and then we iterate over the list to check if there is another element which is largest like
 [3,2,1,5,2]

*/

int main()
{
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(8);
    arr.push_back(7);
    arr.push_back(56);
    arr.push_back(90);
    int largest = arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    cout << largest;
}