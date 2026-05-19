def isPalardom(n):
    if len(n) <= 1:
        return True
    if n[0] != n[-1]:
        return False
    return isPalardom(n[1:-1])


print(isPalardom("moms"))
