class Solution:
    def maxAreaOfIsland(self, grid: List[List[int]]) -> int:
        R,C=len(grid),len(grid[0])
        visit=set()
        def dfs(row,col):
            if (row<0 or row==R or col<0 or col==C or ((row,col) in visit) or grid[row][col]==0):
                return 0
            visit.add((row,col))
            return (1+dfs(row+1,col)+dfs(row-1,col)+dfs(row,col+1)+dfs(row,col-1))

        area=0
        for row in range(R):
            for col in range(C):
                area=max(area,dfs(row,col))

        return area