class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1;
        while(l<=r){
            int i=(l+r)/2;
            if(target<nums[i]){
                r=i-1;
            }
            else if(target > nums[i]){
                l=i+1;

            }
            else{
                return i;
            }
        }
        return -1;
    }
};