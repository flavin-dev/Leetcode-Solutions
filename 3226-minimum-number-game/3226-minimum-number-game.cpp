class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        if(nums.size()==1){
            return nums;
        }
        vector<int>arr;
        
        for(int i=0;i<nums.size()-1;i++){
            
            sort(nums.begin(),nums.end());
            int bob=nums[1];
            int alice=nums[0];
            if(bob==INT_MAX&&alice!=INT_MAX){
                arr.push_back(alice);
                nums[0]=INT_MAX;
            }
            
            else if(bob==INT_MAX&&alice==INT_MAX){
                return arr;
            }
            else{
                arr.push_back(bob);
                arr.push_back(alice);
                nums[1]=INT_MAX;
                nums[0]=INT_MAX;
            }
        }
        return arr;
    }
};