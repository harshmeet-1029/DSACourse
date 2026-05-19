def swapOfArray(arr, left, right):
    if len(arr) == 0:
        return arr
    if left > right:
        return arr
    arr[left], arr[right] = arr[right], arr[left]
    return swapOfArray(arr, left + 1, right - 1)


arr = [1, 2, 3, 4, 5]
left = 0
right = len(arr) - 1
print(swapOfArray(arr, left, right))


def swapOfArraySinglePointer(arr, i=0):
    if i >= len(arr) // 2:
        return arr
    right = len(arr) - 1 - i
    arr[i], arr[right] = arr[right], arr[i]
    return swapOfArraySinglePointer(arr, i + 1)


arr = [1, 2, 3, 4, 5]
print(swapOfArraySinglePointer(arr))
