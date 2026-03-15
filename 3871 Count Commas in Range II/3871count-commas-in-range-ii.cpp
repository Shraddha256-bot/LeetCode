class Solution {
public:
    long long countCommas(long long n) {
        long long ans = 0;
        long long st = 1000;
        int commas = 1;

        while(st <= n){
            long long end = st * 1000 -1;
            long long count = min(n,end) - st + 1;
            ans += count * commas;
            st *= 1000;
            commas ++;
        }
        return ans;

            
        
    }
};