class Solution {
public:
    int minEatingSpeed(vector<int>& p, int h) {
        int maxi=INT_MIN;
        for(int i=0;i<p.size();i++){
            if(maxi<p[i]) maxi=p[i];
        }
        
        int res=INT_MAX;
        int l=1,r=maxi;
        while(l<=r){
            int mid=l+(r-l)/2;
            long total=0;
            for(int i=0;i<p.size();i++){
                total+=(p[i]+mid-1)/mid;
            }
            if(total<=h){
                res=min(res,mid);
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return res;
    }
};