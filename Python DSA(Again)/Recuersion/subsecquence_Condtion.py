def subsequenceCondtionRecursion(s, i=0, arry=[]):
    if len(s) == 0:
        print(None)

    if i == len(s):

        return

    arry.append(s[i])
    if sum(arry) > 3:
        print(arry)
    subsequenceCondtionRecursion(s, i + 1, arry)
    arry.pop()
    subsequenceCondtionRecursion(s, i + 1, arry)


subsequenceCondtionRecursion([1, 2, 3])


# How many total subsques has sum gerate hen 3
def subsequenceCondtionRecursionSum(s, i=0, arry=[]):
    if len(s) == 0:
        return None

    if i == len(s):
        if sum(arry) > 3:
            return 1
        return 0

    arry.append(s[i])

    left = subsequenceCondtionRecursionSum(s, i + 1, arry)

    arry.pop()
    right = subsequenceCondtionRecursionSum(s, i + 1, arry)
    return left + right


print(subsequenceCondtionRecursionSum([1, 2, 3, 4]))


def subsequenceCondtionRecursionSumList(s, i=0, arry=[]):
    if len(s) == 0:
        return None

    if i == len(s):
        if sum(arry) > 3:
            return [arry[:]]
        return []

    arry.append(s[i])

    left = subsequenceCondtionRecursionSumList(s, i + 1, arry)

    arry.pop()
    right = subsequenceCondtionRecursionSumList(s, i + 1, arry)
    return left + right


print(subsequenceCondtionRecursionSumList([1, 2, 3, 4]))


# Find one + stop early — return True/False:
def solve(arr, i, current, k):
    if i == len(arr):
        if sum(current) == k:
            print(current)
            return True
        return False

    current.append(arr[i])
    if solve(arr, i + 1, current, k):
        return True  # found it, stop everything
    current.pop()
    return solve(arr, i + 1, current, k)


print(solve([1, 2, 3, 4], 0, [], 3))

print("====================================")
def printAllSubsequnce(s, i=0, a=[]):

    if i == len(s):
        print(a)
        return

    a.append(s[i])

    printAllSubsequnce(s, i + 1, a)

    a.pop()

    printAllSubsequnce(s, i + 1, a)


printAllSubsequnce([1,2,3])
