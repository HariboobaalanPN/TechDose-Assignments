class Solution:
    def spiralOrder(self, matrix: List[List[int]]) -> List[int]:
        r,c=len(matrix),len(matrix[0])
        top,down,left,right,direction=0,r-1,0,c-1,0
        spiralTraversal=[]
        while top<=down and left<=right:
            if direction==0:
                for i in range(left,right+1):
                    spiralTraversal.append(matrix[top][i])
                top+=1
            elif direction==1:
                for i in range(top,down+1):
                    spiralTraversal.append(matrix[i][right])
                right-=1
            elif direction==2:
                for i in range(right,left-1,-1):
                    spiralTraversal.append(matrix[down][i])
                down-=1
            elif direction==3:
                for i in range(down,top-1,-1):
                    spiralTraversal.append(matrix[i][left])
                left+=1
            direction=(direction+1)%4
        return spiralTraversal