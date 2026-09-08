class Solution {
public:
    string addBinary(string a, string b) {
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());

        string ans="";
        int carry=0;
        for(int i=0;i<max(a.size(),b.size());i++){
            int digitA,digitB;
            if(i<a.size()){
                digitA=(int)a[i]-'0';
            }
            else{
                digitA=0;
            }
            if(i<b.size()){
                digitB=(int)b[i]-'0';
            }
            else{
                digitB=0;
            }
            int total=digitA+digitB+carry;
            string str=to_string(total%2);
            ans=str+ans;
            carry=total/2;
        
        }
        if(carry){
            ans="1"+ans;
        }
        return ans;

    }
};