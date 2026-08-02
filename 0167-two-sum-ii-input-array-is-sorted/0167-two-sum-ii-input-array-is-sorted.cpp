class Solution {
public:
    vector<int> twoSum(vector<int>& n, int target) {
        int N=n.size();
        int l=0,r=N-1;
        while(l<r){
            int sum=n[l]+n[r];
            
            if(sum>target){
                r--;
            }
            else if(sum<target){
                l++;
            }
            else if(sum==target){
                return {l+1,r+1};
            }

        }
        return {l,r};
    }
};