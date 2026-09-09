class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int>magfreq(26,0);
        vector<int>ranfreq(26,0);
        for(int i=0;i<magazine.size();i++){
            magfreq[magazine[i]-'a']++;
        }
        for(int i=0;i<ransomNote.size();i++){
            ranfreq[ransomNote[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(!(ranfreq[i]<=magfreq[i])){
                return false;
            }
        }
        return true;
    }
};