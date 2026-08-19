
class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        long sum=0,f=0;
        int N=nums.size();
        for(int i=0;i<N;i++){
            sum+=nums[i];
            f+=i*nums[i];
        }
        long ans=f;
        for(int li=N-1;li>0;li--){
            f=f-(nums[li]*(N-1))+sum-nums[li];
            ans=max(f,ans);
        }
        return ans;
    }
};