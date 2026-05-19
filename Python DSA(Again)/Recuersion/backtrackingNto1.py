def backtrackingNto1(n,i=1):
    if (i>n):
        return 
    backtrackingNto1(n,i+1)
    print(i)

backtrackingNto1(5)