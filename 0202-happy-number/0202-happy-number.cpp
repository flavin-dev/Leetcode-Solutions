class Solution {
public:
    bool isHappy(int n) {
        if(n==1||n==7) return true;
        else if(n<9){
            return false;
        }
        int sum=0;
        int temp=n;
        
        while(temp>0){
            int digit=temp%10;
            sum+=pow(digit,2);
            temp/=10;
        }
        return isHappy(sum);
    }
};