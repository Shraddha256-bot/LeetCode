class Solution {
public:
    int hammingWeight(int n) {
        string num;
        int k = 0;

        while(n > 0){
            if (n % 2 == 1){
                k  = k + 1;
            }

            //else {
                //num = num + "0";
            //}

            n = n / 2;
        }

        
        

        return k;
    }
};