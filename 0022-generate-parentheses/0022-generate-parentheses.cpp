class Solution {
public:
    void rec(int open,int close,int n,string s,vector<string>&ans){
        if(open==close&& (open+close)==2*n){
            ans.push_back(s);
            return;
        }
        if(open<n){
            rec(open+1,close,n,s+'(',ans);
        }
        if(close<open){
            rec(open,close+1,n,s+')',ans);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        rec(0,0,n,"",ans);
        return ans;
    }
};