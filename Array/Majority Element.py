def findMajorityElement(nums):
    d = {}
    for i in nums:
        d[i]=d.get(i,0)+1
    for key, value in d.items():
        if value > len(nums) // 2:
            return key
    return -1
nums = [1, 8, 7, 4, 1, 2, 2, 2, 2, 2, 2]
result = findMajorityElement(nums)
if result != -1:
    print('The majority element is', result)
else:
    print('The majority element does not exist')
