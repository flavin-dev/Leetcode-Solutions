class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()==1) return 0;
        int l=0,r=1,maxi=0;
        while(r<prices.size()){
            if(prices[l]<prices[r]){
                int profit=prices[r]-prices[l];
                maxi=max(maxi,profit);
            }

            else{
                l=r;
            }
            r++;
        }
        return maxi;
        }
};