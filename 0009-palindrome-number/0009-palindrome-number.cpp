class Solution {
public:
    bool isPalindrome(int x) {
        int n;
        long long ans=0;
        int original=x;
        if(x<0)
        {
            return false;
        }
        while(x>0)
        {
            
            ans=(ans*10)+(x%10);
            x/=10;
        }
        return original==ans;
    }
};