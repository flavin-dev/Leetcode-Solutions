class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int N=nums.size();
        unordered_map<int,int>mp;
        int maxi=INT_MIN,maxnum=INT_MIN;
        for(int i=0;i<N;i++){
            mp[nums[i]]++;
            if(mp[nums[i]]>maxi){
                maxnum=nums[i];
                maxi=mp[nums[i]];
            }

        }
        return maxnum;
    }
};