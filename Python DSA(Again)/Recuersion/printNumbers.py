def printNumber(n,k=1):
    if k > n:
        return 
    print(k)
    printNumber(n,k+1)

printNumber(5)