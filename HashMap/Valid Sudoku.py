class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        submatrix = [set() for _ in range(9)]
        rows = [set() for _ in range(9)]
        cols = [set() for _ in range(9)]
        for i in range(len(board)):
            for j in range(len(board[0])):
                if board[i][j] != '.':
                    num = int(board[i][j])
                    submatrix_id = (i // 3) * 3 + (j // 3)
                    if num in rows[i] or num in cols[j] or num in submatrix[submatrix_id]:
                        return False
                    
                    rows[i].add(num)
                    cols[j].add(num)
                    submatrix[submatrix_id].add(num)
        return True