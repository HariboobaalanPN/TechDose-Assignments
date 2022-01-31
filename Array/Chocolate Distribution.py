def chocolateDistribution(L, n):
    left=[1]*n
    right=[1]*n
    for i in range(1,n):
        if L[i]>L[i-1]:
            left[i]=left[i-1]+1
    for i in range(n-2,-1,-1):
        if L[i]>L[i+1]:
            right[i]=right[i+1]+1
    max_chocolates=0
    for i in range(n):
        max_chocolates+=max(left[i],right[i])
    return max_chocolates
L = [12,4,3,11,34,34,1,67]
noOfStudents = 8
print(chocolateDistribution(L,noOfStudents))