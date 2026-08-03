class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums, vector<int>& nums2) {
        nums.insert(nums.end(),nums2.begin(),nums2.end());
        sort(nums.begin(),nums.end());
        int N=nums.size();
        int mid;
        if(N%2==0){
            return (nums[N/2]+nums[(N/2)-1])/2.0;
        }
        else{
            return nums[N/2];
        }
        return (nums[N/2]+nums[(N/2)+1])/2.0;
    }
};