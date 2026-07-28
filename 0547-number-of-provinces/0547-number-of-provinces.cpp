class Solution {
public:
    int find(vector<int>&ldr,int x){
        if(ldr[x]==x){
            return x;
        }
        return find(ldr,ldr[x]);
    }
    void join(vector<int>&ldr,int row,int col){
    int ll=find(ldr,row);
	int rl=find(ldr,col);
	ldr[rl]=ll;
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int N=isConnected.size();
        vector<int> ldr(N+1);
        for(int i=0;i<=N;i++){
            ldr[i]=i;        
        }
        for(int row=0;row<N;row++){
            for(int col=0;col<N;col++){
                if(isConnected[row][col]){
                    join(ldr,row,col);
                }
            }
        }
        int cnt=0;
        for(int i=0;i<N;i++){
            if(find(ldr,i)==i){
                cnt++;
            }
        }
        return cnt;
    }

};