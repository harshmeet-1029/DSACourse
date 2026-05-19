def backtrackingItoN(n,i):
    if (i<1):
        return
    backtrackingItoN(n,i-1)
    print(i)


backtrackingItoN(5,5)