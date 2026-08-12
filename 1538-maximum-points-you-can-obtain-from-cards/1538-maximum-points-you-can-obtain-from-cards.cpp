class Solution {
public:
    int maxScore(vector<int>&nums, int k) {
        int lsum=0,rsum=0,maxsum=0,n=nums.size();
        for(int i=0;i<k;i++){
            lsum+=nums[i];
        }
        maxsum=lsum;
        int rptr=n-1;
        for(int i=k-1;i>=0;i--){
            lsum-=nums[i];
            rsum+=nums[rptr];
            rptr--;
            maxsum=max(maxsum,lsum+rsum);
        }
        return maxsum;
    }
};