class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        vector<int>ans;
        unordered_map<int,int>mp;
        for(int n:nums){
            mp[n]++;
        }
        for(pair<int,int>n:mp){
            if(n.second==1 && mp.count(n.first+1)==0 && mp.count(n.first-1)==0){
                ans.push_back(n.first);
            }
        }
        return ans;
    }
};