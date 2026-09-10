class Solution {
    int dr[4]={0,0,1,-1};
    int dc[4]={1,-1,0,0};
    private:
    void bfs(int sr,int sc,vector<vector<char>>& grid,vector<vector<bool>>&visited,int R,int C){
        queue<pair<int,int>>q;
        visited[sr][sc]=true;
        q.push({sr,sc});
        
        while(!q.empty()){
            auto [r,c]=q.front();
            q.pop();
            for(int d=0;d<4;d++){
                int nr=r+dr[d];
                int nc=c+dc[d];
                if(nr>=0&&nc>=0&&nr<R&&nc<C&&grid[nr][nc]=='1'&&visited[nr][nc]==false){
                    q.push({nr,nc});
                    visited[nr][nc]=true;
                }
            }
        }
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        if(grid.empty()) return 0;
        int R=grid.size(),C=grid[0].size();
        int count=0;
        vector<vector<bool>>visited(R,vector<bool>(C,false));
        for(int row=0;row<R;row++){
            for(int col=0;col<C;col++){
                if(grid[row][col]=='1'&&visited[row][col]==false){
                    bfs(row,col,grid,visited,R,C);
                    count++;
                }
            }
        }
        return count;
    }
};