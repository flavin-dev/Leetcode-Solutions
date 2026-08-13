class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int maxlen=0;
        for(int i=0;i<n;i++){
            vector<int>freq(256,0);
            int len=0;
            for(int j=i;j<n;j++){
                if(freq[s[j]]==1){
                    break;
                }
                len+=1;
                maxlen=max(len,maxlen);
                freq[s[j]]++;
            }

        }
        return maxlen;
    }
};