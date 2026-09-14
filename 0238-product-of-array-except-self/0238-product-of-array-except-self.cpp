class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        if(nums.empty()) return {};
        int N=nums.size();
        vector<int>pre(N),post(N),ans(N);
        pre[0]=1;
        post[N-1]=1;
        for(int i=1;i<N;i++){
            pre[i]=pre[i-1]*nums[i-1];
        }
        for(int i=N-2;i>=0;i--){
            post[i]=post[i+1]*nums[i+1];
        }
        for(int i=0;i<N;i++){
            ans[i]=pre[i]*post[i];
        }
        return ans;
    }
};