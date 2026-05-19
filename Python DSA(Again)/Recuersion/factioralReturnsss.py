def factorialFunctional(n):
    if n == 1:
        return 1
    return n * factorialFunctional(n - 1)


print(factorialFunctional(5))


def factorialParamterized(n, i=1):
    if n == 0:
        print(i)
        return

    i *= n
    factorialParamterized(n - 1, i)


factorialParamterized(5)
