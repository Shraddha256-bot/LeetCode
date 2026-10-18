class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        int num = 0;
        int k = x;

        while(k != 0){
            int rem = k % 10;
            int val = k / 10;

            if(num > INT_MAX / 10 || (num == INT_MAX / 10 && rem > 7)){
                return false;
            }

            num = num * 10 + rem;

            k = val;
        }

        if (x == num){
            return true;
        }else{
            return false;
        }
        
    }
};