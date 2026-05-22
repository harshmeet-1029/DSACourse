def subsequenceRecursion(s, i=0, arry=[]):
    if len(s) == 0:
        print(s)
    if i == len(s):
        print(arry)
        return

    arry.append(s[i])
    subsequenceRecursion(s, i + 1, arry)
    arry.pop()
    subsequenceRecursion(s, i + 1, arry)


subsequenceRecursion("abc")
