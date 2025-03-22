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

    https://youtu.be/37E9ckMDdTk?list=PLgUwDviBIf0rENwdL0nEH0uGom9no0nyB&t=1321
    */
}