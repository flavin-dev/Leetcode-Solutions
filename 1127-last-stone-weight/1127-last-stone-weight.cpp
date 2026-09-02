class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        while(stones.size()>1){
            sort(stones.begin(),stones.end());
            int N=stones.size();
            int curr=stones[N-1]-stones[N-2];
            stones.pop_back();
            stones.pop_back();
            if(curr!=0){
                stones.push_back(curr);
            }
        }
        if(stones.empty()){
            return 0;
        }
        return stones[0];
        
    }
};