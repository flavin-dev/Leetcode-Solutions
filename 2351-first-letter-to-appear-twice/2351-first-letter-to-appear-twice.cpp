class Solution {
public:
    char repeatedCharacter(string s) {
        vector<int>freq(26,0);
        for(int i=0;i<s.size();i++){
            if(freq[s[i]-'a']){
                return s[i];
            }
            else{
                freq[s[i]-'a']++;
            }
        }
        return s[0];
    }
};