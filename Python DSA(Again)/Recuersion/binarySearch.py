def BinarySearch(arr,k,n=0):
    if len(arr) == 0:
        return -1

    if arr[n] == k:
        return n

    return BinarySearch(arr,k,n+1)

print(BinarySearch([1,2,3,4,5,6,7,8,9,10],6)) 