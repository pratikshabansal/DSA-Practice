class Solution {
public:
    bool isPalindrome(int x) {
        long long reverse=0;
        int real=x;
        if(x==0){
            return true;
        }
        if(x<0){
            return false;
        }
        while(x!=0){
            int digit=x%10;
            reverse=reverse*10+digit;
            x=x/10;
        }
        if(reverse==real){
            return true;
        }
        else{
            return false;
        }
    }
};