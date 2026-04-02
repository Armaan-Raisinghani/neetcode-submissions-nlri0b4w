class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        l,r = 0,len(matrix)*len(matrix[0])-1
        m = (l+r)//2
        while True:
            m = (l+r)//2
            i = m//len(matrix[0])
            j = m%len(matrix[0])
            t = matrix[i][j]
            if t == target:
                return True
            if t < target:
                l = m+1
            if t > target:
                r = m-1
            if m == (l+r)//2:
                return False
            