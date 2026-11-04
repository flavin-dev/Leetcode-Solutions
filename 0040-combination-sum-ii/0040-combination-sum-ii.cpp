class Solution {
public:
    void backtrack(int i,int total,vector<vector<int>>&res,vector<int>&curr,vector<int>&candidates,int target){
        if(total == target) {
            res.push_back(curr);
            return;
        }
        if(i>=candidates.size()||total>target){
            return ;
        }
        curr.push_back(candidates[i]);
        backtrack(i+1,total+candidates[i],res,curr,candidates,target);
        curr.pop_back();
        while(i+1<candidates.size() && candidates[i]==candidates[i+1])
        i++;
        backtrack(i+1,total,res,curr,candidates,target);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>res;
        vector<int>curr;
        sort(candidates.begin(),candidates.end());
        backtrack(0,0,res,curr,candidates,target);

        return res;
    }
};