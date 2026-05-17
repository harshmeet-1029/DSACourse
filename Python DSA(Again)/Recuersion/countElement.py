def CountElement(arr):
    if arr == []:
        return 0
    return 1+ CountElement(arr[1:])

print(CountElement([]))