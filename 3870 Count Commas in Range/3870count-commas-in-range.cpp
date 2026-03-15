class Solution {
public:
    int countCommas(int n) {
        long long commas = 0;

        for(int i = 1; i <= n; i++){
            int d = 0;
            int temp = i;

            while(temp > 0){
                d++;
                temp /= 10;
            }

            commas += (d-1)/3;
        }

        return commas;
    }
};