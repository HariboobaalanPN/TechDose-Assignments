class Solution:
    def orangesRotting(self, grid: List[List[int]]) -> int:
        orange = rotten = 0
        R, C = len(grid), len(grid[0])
        queue = []
        for i in range(R):
            for j in range(C):
                if grid[i][j] >= 1:
                    orange += 1
                if grid[i][j] == 2:
                    queue.insert(0,(i, j))
                    rotten += 1
        if orange == 0:
            return 0
        mins = -1
        visited = 0
        while queue:
            count, rotten = rotten, 0
            for i in range(count):
                row, col = queue.pop()
                visited += 1
                for r, c in ((row-1, col), (row, col-1), (row, col+1), (row+1, col)):
                    if r >= 0 and r < R and c >= 0 and c < C and grid[r][c] == 1:
                        grid[r][c] = 2
                        queue.insert(0,(r, c))
                        rotten += 1
            mins += 1
        if visited == orange:
            return mins
        return -1  