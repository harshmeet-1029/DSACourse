def reverse_array(arr):
    """
    mY CODE
    firstIndex = 0
    lastIndex = len(arr) - 1
    for _ in arr:
        if firstIndex == len(arr) - 2:
            return arr
        a = arr[firstIndex]
        arr[firstIndex] = arr[lastIndex]
        arr[lastIndex] = a
        firstIndex += 1
        lastIndex -= 1"""

    firstIndex = 0
    lastIndex = len(arr) - 1
    while firstIndex < lastIndex:
        arr[firstIndex], arr[lastIndex] = arr[lastIndex], arr[firstIndex]
        firstIndex += 1
        lastIndex -= 1
    return arr


""" 

✅ Input: [1, 2, 3, 4, 5]
✅ Output: [5, 4, 3, 2, 1]

In-place: Don't create a new array. Use swaps.

 """

print(reverse_array([1, 2, 3, 4, 5]))
