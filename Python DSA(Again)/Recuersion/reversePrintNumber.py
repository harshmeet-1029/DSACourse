def reversePrintNumber(n):
    if n<=0:
        return 
    print(n)
    reversePrintNumber(n-1)


reversePrintNumber(5)