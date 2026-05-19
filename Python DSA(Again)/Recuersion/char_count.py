def char_count(string, value, n=0):
    if n == len(string):
        return 0
    count = 0
    if string[n] == value:
        count = 1
    else:
        count = 0
    return count + char_count(string, value, n + 1)


print(char_count("banana", "a"))
