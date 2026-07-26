class Solution {
public:
    bool isPalindrome(string s,int l,int r){
        
        while(l<r){
            if(s[l]!=s[r]){
                return false;
            }
            l++;
            r--;
        }
        return true;
        
    }
    bool validPalindrome(string s) {
        if(s.empty()){
            return true;
        }
        int l=0,r=s.size()-1;
        while(l<r){
            if(s[l]!=s[r]){
                return isPalindrome(s,l+1,r)||isPalindrome(s,l,r-1);
            }
            
            else{
                l++;
            r--;
            }
            
        }
        return true;
    }
};