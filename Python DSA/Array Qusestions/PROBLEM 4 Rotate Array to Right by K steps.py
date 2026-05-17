def rotate_right(arr, k):
    k = k % len(
        arr
    )  # OVer here i am doing is dividing the value of k with the len of the arry so i can get the remainder and do that time ooeration

    return arr[-k:]+arr[:-k] 
# [start:step:stop] and when i put [-k:] k is 2 so when i put -k at the start it will gonna start from reverse like 
# -2 means 2nd last element and : means rest future means 4,5. same if i do [:-k] that means start is from 0 till -2
# means p[]


"""
🚀 PROBLEM 4: Rotate Array to Right by K steps
def rotate_right(arr, k):
    pass  # your code
✅ Input: [1, 2, 3, 4, 5], k = 2
✅ Output: [4, 5, 1, 2, 3]

"""

print(rotate_right([1, 2, 3, 4, 5], 7))
