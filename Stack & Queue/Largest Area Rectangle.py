#General approach -> store leftmin O(n), right min O(n), calculate area & find maxArea O(n).  
class Solution:
    def largestRectangleArea(self, heights: List[int]) -> int:
        left,right,stack,n,maxarea=[],[],[],len(heights),0
        for i in range(n):
            while stack and heights[stack[-1]]>=heights[i]:
                stack.pop()
            if stack==[]:
                left.append(0)
            else:
                left.append(stack[-1]+1)
            stack.append(i)
        stack=[]
        for i in range(n-1,-1,-1):
            while stack and heights[stack[-1]]>=heights[i]:
                stack.pop()
            if stack==[]:
                right.insert(0,n-1)
            else:
                right.insert(0,stack[-1]-1)
            stack.append(i)
        for i in range(n):
            area=((right[i]-left[i])+1)*heights[i]
            if area>maxarea:
                maxarea=area
        return maxarea
        
##sliding window technique - O(n)
class Solution:
	def largestRectangleArea(self, heights: List[int]) -> int:
		stack = []
		maxarea = 0
		for i,height in enumerate(heights+[0]):
			while stack and heights[stack[-1]] > height:
				height = heights[stack.pop()] #current maxheight
				if not stack:
					width = i
				else:
					width = i-stack[-1]-1 #num of bars
				maxarea = max(mx, height*width)
			stack.append(i)
    
		return maxarea