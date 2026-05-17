def find_max(arr):
    if not arr:
        return None

    max_value = arr[0]
    for value in arr[1:]:
        if value > max_value:
            max_value = value
    return max_value


""" 
✅ Input: [10, 24, 5, 9, 30]
✅ Output: 30
"""

print(find_max([10, 24, 5, 9, 30]))
