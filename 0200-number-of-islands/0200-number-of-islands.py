class Solution:
    def numIslands(self, grid: List[List[str]]) -> int:
        if not grid:
            return 0
        
        R,C=len(grid),len(grid[0])
        visit=set()
        island=0
        def bfs(r,c):
            q=collections.deque()
            visit.add((r,c))
            q.append((r,c))
            while q:
                row,col=q.pop()
                directions=[[1,0],[-1,0],[0,1],[0,-1]]
                for dr,dc in directions:
                    r,c=row+dr,col+dc
                    if (r in range(R) and c in range(C) and grid[r][c]=="1" and (r,c) not in visit):
                        q.append((r,c))
                        visit.add((r,c))
        
        for row in range(R):
            for col in range(C):
                if grid[row][col]=="1" and (row,col) not in visit:
                    bfs(row,col)
                    island+=1
        return island