def increaseCounter(n):

    if n == 3:
        return n + 1

    return 1+increaseCounter(n + 1)


print(increaseCounter(0))
