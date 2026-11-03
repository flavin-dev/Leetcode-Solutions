class Solution {
public:
    
    void dfs(int i,vector<int>&candidates,int &target,int total,vector<vector<int>>&res,vector<int>&curr){
        if(total==target){
            res.push_back(curr);
            return;
        }
        if(i>candidates.size()-1 || total>target){
            return ;

        }
        curr.push_back(candidates[i]);
        dfs(i,candidates,target,total+candidates[i],res,curr);
        curr.pop_back();
        dfs(i+1,candidates,target,total,res,curr);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>res;
    vector<int>curr;
        dfs(0,candidates,target,0,res,curr);
        return res;
    }
};