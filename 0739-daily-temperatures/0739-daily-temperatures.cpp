class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        vector<int>ans(t.size(),0);
        stack<pair<int,int>>st;
        for(int i=0;i<t.size();i++){
            while(!st.empty() && t[i]>st.top().first){
                auto pair=st.top();
                st.pop();
                ans[pair.second]=i-pair.second;

            }
            st.push({t[i],i});

        }
        return ans;
    }
};