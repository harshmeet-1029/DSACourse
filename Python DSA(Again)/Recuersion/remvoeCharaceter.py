def removeCharacter(s, v, k=0):
    if k >= len(s):

        return s

    if s[k] == v:

        s = (
            s[:k] + s[k + 1 :]
        )  # banana[:1] (b) + s[1+1:] s[2:] (nana) so it becomes bnana
        k -= 1
    return removeCharacter(s, v, k + 1)


print(removeCharacter("banana", "a"))
