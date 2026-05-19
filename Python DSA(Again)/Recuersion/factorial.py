# 5! 5*4*3*2*1


def factoral(n):
    if n == 1:
        return 1

    return n * factoral(n - 1)


print(factoral(3))
