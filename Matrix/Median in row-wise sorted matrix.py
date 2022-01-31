from bisect import bisect_right as upper_bound
def matrixMedian(m, r, c):
    minn = m[0][0]
    maxx = 0
    for i in range(r):
        if m[i][0] < minn:
            minn=m[i][0]
        if m[i][c-1] > maxx :
            maxx=m[i][c-1]
    desired = (r*c+1)//2
    while (minn < maxx):
        mid = minn + (maxx - minn) // 2
        place = [0];
        for i in range(r):
             j = upper_bound(m[i], mid)
             place[0] = place[0] + j
        if place[0] < desired:
            minn = mid + 1
        else:
            maxx = mid
    return minn
r,c=3,3
m = [[1,3,5],[2,6,9],[3,6,9]]
print(matrixMedian(m,r,c))