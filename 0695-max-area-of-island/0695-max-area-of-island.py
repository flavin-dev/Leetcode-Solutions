class Solution:
    def maxAreaOfIsland(self, grid: List[List[int]]) -> int:
        R,C=len(grid),len(grid[0])
        visit=set()
        
        maxcount=0
        def dfs(r,c):
            q=collections.deque()
            visit.add((r,c))
            q.append((r,c))
            count=1
            while q:
                row,col=q.pop()
                directions=[[1,0],[-1,0],[0,1],[0,-1]]
                for dr,dc in directions:
                    r,c=row+dr,col+dc
                    if (r in range(R) and c in range(C) and grid[r][c]==1 and (r,c) not in visit):
                        q.append((r,c))
                        visit.add((r,c))
                        count+=1
            return count

        
        for row in range(R):
            for col in range(C):
                if grid[row][col]==1 and (row,col) not in visit:
                    maxcount=max(maxcount,dfs(row,col))
        return maxcount