def pow(value,times):
    if times ==0:
        return 1
    return value * pow(value,times-1)

print(pow(2,4))