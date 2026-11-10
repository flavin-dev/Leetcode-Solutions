class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
         int R=matrix.size(),C=matrix[0].size();
         int top=0,bot=R-1;
         while(top<=bot){
            int mid=(top+bot)/2;
            if(target>matrix[mid][C-1]){
                top=mid+1;
            }
            else if(target<matrix[mid][0]){
                bot=mid-1;
            }
            else{
                break;
            }
         }
         if(top>bot){
            return false;
         }
         int row=(top+bot)/2;
         int l=0,r=C-1;
         while(l<=r){
            int m=(l+r)/2;
            if(target>matrix[row][m]){
                l=m+1;
            }
            else if(target<matrix[row][m]){
                r=m-1;
            }
            else{
                return true;
            }
         }
         return false;
    }
};