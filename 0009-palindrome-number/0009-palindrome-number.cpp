class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)return false;
        int long palNum=0;
        int original=x;
        while(x>0){
            int digit=x%10;
            palNum=palNum*10+digit;
            x/=10;

        }
        
        return palNum==original;
        
        
        
    }
};