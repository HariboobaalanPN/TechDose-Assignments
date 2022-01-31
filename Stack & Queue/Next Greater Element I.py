class Solution:
    def nextGreaterElement(self, nums1: List[int], nums2: List[int]) -> List[int]:
        result=[]
        stack=[]
        D={}
        for num in nums2:
            while stack and stack[-1] < num:
                D[stack.pop()] = num
            stack.append(num)
        for num in nums1:result.append(D.get(num, -1))
        return result