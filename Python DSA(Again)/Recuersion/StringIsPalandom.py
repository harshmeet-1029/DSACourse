def isPalardom(s, i=0):

    right = len(s) - 1

    if len(s) == 1:
        return True

    if s[i] != s[right]:
        return False
    return isPalardom(s[1:-1], i)


print(isPalardom("adad"))


def striverIsPlandrom(s, i=0):
    r = len(s) - 1
    if i>=r:
        return True
    if s[i] != s[r - 1]:
        return False

    return striverIsPlandrom(s, i + 1)
print(striverIsPlandrom(""))