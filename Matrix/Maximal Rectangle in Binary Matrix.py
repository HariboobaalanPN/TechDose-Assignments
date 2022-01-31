class Solution:
    def maximalRectangle(self, matrix: List[List[str]]) -> int:
        r,c=len(matrix),len(matrix[0])
        histogramMatrix=[list(map(int,matrix[0]))]
        for i in range(1,r):
            a=[]
            for j in range(c):
                if matrix[i][j]=='0':
                    a.append(0)
                else:
                    a.append(histogramMatrix[-1][j]+int(matrix[i][j]))
            histogramMatrix.append(a)
        maxarea=0
        for heights in histogramMatrix:
            left,right,stack,n=[],[],[],len(heights)
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