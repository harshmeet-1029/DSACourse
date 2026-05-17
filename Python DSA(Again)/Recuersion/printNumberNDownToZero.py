def printNNumber(n):
    if n<1:
        return n
    print(n)
    printNNumber(n-1)

printNNumber(5)