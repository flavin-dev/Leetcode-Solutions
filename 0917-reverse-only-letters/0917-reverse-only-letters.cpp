class Solution {
public:
    string reverseOnlyLetters(string s) {
        int l=0,r=s.size()-1;
        while(l<r){
            if(!isalpha(s[l])){
                l++;
            }
            else if(!isalpha(s[r])){
                r--;
            }
            else{
                char ch=s[l];
                s[l]=s[r];
                s[r]=ch;
                l++;
                r--;
            }
        }
        return s;
    }
};