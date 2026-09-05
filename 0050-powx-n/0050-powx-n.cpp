class Solution {
public:
    double myPow(double x, int n) {
        if(n==0) return 1;
        double ans=1;
        long long N=n;
        if(N<0){
            x=1/x;
            N=-N;
        }
        while(N > 0){
            if(N % 2 == 1){
                ans *= x;
                N--;
            }
            else{
                x *= x;
                N /= 2;
            }
        }
        return ans;
    }
};