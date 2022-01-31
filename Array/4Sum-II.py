def fourSumCount(nums1,nums2,nums3,nums4):
    D1 = {}
    for x in nums1:
        for y in nums2:
            D1[x + y] = D1.get(x+y, 0) + 1
    count = 0
    for x in nums3:
        for y in nums4:
            count = count + D1.get(-(x+y), 0)
    return count
nums1 = [1,2]
nums2 = [-2,-1]
nums3 = [-1,2]
nums4 = [0,2]
print(fourSumCount(nums1,nums2,nums3,nums4))