def sumNestedList(arr):

    # Base case
    if len(arr) == 0:
        return 0

    first = arr[0]
    rest = arr[1:]

    # If nested list
    if isinstance(first, list):
        return sumNestedList(first) + sumNestedList(rest)

    # Normal number
    else:
        return first + sumNestedList(rest)


print(sumNestedList([1, [2, 3], 4]))