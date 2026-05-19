def print1toN(n,i=0):
    if i>n:
        return
    print(i)
    print1toN(n,i+1)

print1toN(5)