def sumOfNumber(i, sum=0):
    if i == 0:
        print(sum)
        return
    sumOfNumber(i - 1, sum + i)


sumOfNumber(3)


def sumOfNumberFunctional(i):

    if i == 1:
        return 1
    return i + sumOfNumberFunctional(i - 1)


print(sumOfNumberFunctional(3))
