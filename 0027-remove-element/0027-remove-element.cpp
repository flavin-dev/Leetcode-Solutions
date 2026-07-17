class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.empty()){
            return 0;
        }
        int i=0,j=nums.size()-1;
        while(i<=j){
            if(nums[i]==val&&nums[j]!=val){
                nums[i]=nums[j];
                i++;
                j--;
            }
            else if(nums[i]!=val&&nums[j]==val){
                j--;
            }
            else if(nums[i]==val&&nums[j]==val){
                j--;
            }
            else{
                i++;
            }
        }
        
        return j+1;
    }
};