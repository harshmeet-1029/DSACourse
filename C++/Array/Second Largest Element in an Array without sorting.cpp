#include <iostream>
#include <vector>
using namespace std;

int main()
{
    /*
    Second Largest Element in an Array without sorting
    1. Brute force method
    2. Better solution
    3. Optimal

    arra [1,3,2,4,5,6,6]
    ////////////////////////////
    Lets see i got brute force method
    1. I need to sort it
    [1,2,3,4,5,6,6,6]
    now if i do n-2 then it will still point to 6 which does not make any sense so i need to do something like
    if largest = arr[n-2]
    then it should run the loop over arra and by going backwards for the value whcih is != to largest
    but the worst case is
    [1,6,6,6,6,6]
    which means that it need to travese till last which will be

    TC  -> O(n log n) -> Brute force -> O(n) -> finding the element
    */

    /*
    Better solution

     first I can find the largest value which we have done in previous Question and
     then I can check for the second largest value

    It require 2 passes
    1. Pass Find the largest element

    arr = [1,2,4,7,7,5]

    let largest  = arr[0]
    for (i=0; i<arr.size();i++){
    if (arr[i]>largest){
    largest = arr[0]
    }
    }
    // here we find the largest element which is 7

    2. Pass Find the Second largest element

    secondLargest = -1

    for (i = 0;i<arr.size();i++){
    if(arr[i]>secondlargest and arr[i] != largest){
    secondLargest = arr[i]
    }
    }

    so what will going to happen over heere is that it will check if the vlaue is largest then -1
    like 1 and it will check if it  != largest whcih is 7 then assign it

    -1 -> 1 != 7 -> 1
    1 -> 2 >1 and !=7 -> 2
    2 -> 4 > 1 and !=7 -> 4
    4 -> 7 > 4 (yes ) Nd !=7 (no) -> 4
    4 -> 7(next one) >4(yes) and !=7 (no) -> 4
    4 -> 5 >4 (yes) !=7 (yes) -> 5

    and boom 5 is the second largest

    tc -> O(2n)
    */

    /*
    Optimal solution
    [1,2,4,7,7,5]

    So over here what we can do is we can assign two values

    largest = a[0]
    seconLargest = -1

    1. what we need to do is travese from 2 to last element
    2. we need to check if second element is largest then the current element if yes then largest = a[i(current index)] and assign the second largest with the largest prev value
    else if both are equal then do nothing
    3. iteratre to next element and check if it is smaller than the current element then check if it is smaller then check if it greater than the second largest element then assing it else do nothing

    */

    vector<int> arr = {1, 2, 4, 7, 7, 5};

    int largest = arr[0];
    int secondLargest = -1;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        if (arr[i] < largest)
        {
            if (arr[i] > secondLargest)
            {
                secondLargest = arr[i];
            }
        }
    }

    cout << secondLargest;
}