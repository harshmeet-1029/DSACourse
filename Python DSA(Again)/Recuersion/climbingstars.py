def climbingStrais(n):
    if n <= 1:
        return 1

    return climbingStrais(n - 1) + climbingStrais(n - 2)


print(climbingStrais(4))
