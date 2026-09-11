class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int N=s1.size(),M=s2.size();
        if(M<N){
            return false;
        }
        vector<int>freq1(26,0),freq2(26,0);
        for(int i=0;i<N;i++){
            freq1[s1[i]-'a']++;
            freq2[s2[i]-'a']++;
        }
        if(freq1==freq2) return true;
        for(int i=N;i<M;i++){
            freq2[s2[i]-'a']++;
            freq2[s2[i-N]-'a']--;
            if(freq1==freq2) return true;
        }
        return false;
        
    }
};