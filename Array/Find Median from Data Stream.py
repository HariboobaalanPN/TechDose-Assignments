class MedianFinder:

    def __init__(self):
        self.nums = []

    def addNum(self, num: int) -> None:
        insort(self.nums, num)

    def findMedian(self) -> float:
        n = len(self.nums)
        if n == 0:return None
        mid = n // 2
        if n&1:return self.nums[mid]
        else:return (self.nums[mid] + self.nums[mid-1]) / 2


# Your MedianFinder object will be instantiated and called as such:
# obj = MedianFinder()
# obj.addNum(num)
# param_2 = obj.findMedian()