def fibnoic(n):
    # 0 , 1, 1, 2, 3, 5

    if n == 1:
        return 1
    if n == 0:
        return 0

    return fibnoic(n-1) + fibnoic(n-2)

print(fibnoic(4))