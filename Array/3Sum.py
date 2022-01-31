def twoSum(nums, target):
    res = []
    lo, hi = 0, len(nums) - 1
    while lo < hi:
        cur_sum = nums[lo] + nums[hi]
        if cur_sum < target or (lo > 0 and nums[lo] == nums[lo - 1]):
            lo += 1
        elif cur_sum > target or (hi < len(nums) - 1 and nums[hi] == nums[hi + 1]):
            hi -= 1
        else:
            res += [[nums[lo], nums[hi]]]
            lo += 1
            hi -= 1
    return res
def kSum(nums, target, k):
    res = []
    if not nums:
        return res
    avg = target // k
    if avg < nums[0] or nums[-1] < avg:
        return res
    if k == 2:
        return twoSum(nums, target)
    for i in range(len(nums)):
        if i == 0 or nums[i-1] != nums[i]:
            for subset in kSum(nums[i + 1:], target - nums[i], k - 1):
                res += [[nums[i]] + subset]
    return res
nums = [-1,0,1,2,-1,-4]
target=0
nums.sort()
print( kSum(nums, target, 3))