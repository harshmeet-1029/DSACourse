def reverseOfString(a):
    if len(a) == 1:
        return a
    return a[-1] + reverseOfString(a[:-1]) 
print(reverseOfString("hello"))

a= [1,2,3,4,5,6,7,8,9]
print(a[0:-1])