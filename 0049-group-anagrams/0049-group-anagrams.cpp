class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>res;
        for(string s:strs){
            string news=s;
            sort(s.begin(),s.end());
            res[s].push_back(news);
        }
        vector<vector<string>>ans;
        for(auto pair:res){
            ans.push_back(pair.second);
        }
        return ans;

    }
};