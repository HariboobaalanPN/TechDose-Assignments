#1. We can also first transpose the matrix and then reverse the row elements..
#2. Else we can just swap each 4 edge elements.
#Note:- In this the 2nd method is implemented
class Solution:
    def rotate(self, matrix: List[List[int]]) -> None:
        n=len(matrix)
        for i in range(n//2):
            for j in range(i,n-1-i):
                temp=matrix[i][j]
                matrix[i][j]=matrix[n-1-j][i]
                matrix[n-1-j][i]=matrix[n-1-i][n-1-j]
                matrix[n-1-i][n-1-j]=matrix[j][n-1-i]
                matrix[j][n-1-i]=temp