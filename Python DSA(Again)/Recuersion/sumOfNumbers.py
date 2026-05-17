def recurisve_sum(arr):
    if len(arr) == 0:
        return 0
    
    return arr[0] + recurisve_sum(arr[1:])

print(recurisve_sum([1,2,3]))
