class Solution {
public:
    int reverse(int x) {
    
        long long int ans=0;
        int temp=x;
        while(temp!=0){
            ans=ans*10;
            ans+=temp%10;
            temp/=10;
        }
        if(ans>=INT_MAX||ans<INT_MIN) return 0;
        return (int)ans;
    }
};