class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0,r=height.size()-1;
        int res=0;
        while(l<r){
            int idxval=min(height[l],height[r]);
            int area=(r-l)*idxval;
            res=max(res,area);
            if(height[l]<height[r]){
                l++;
            }
            else{
                r--;
            }
        }
        return res;
    }
};