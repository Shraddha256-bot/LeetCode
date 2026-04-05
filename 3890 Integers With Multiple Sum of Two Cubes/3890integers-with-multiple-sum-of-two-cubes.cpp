class Solution {
public:
    vector<int> findGoodIntegers(int n) {
        int num = n;

        unordered_map<int, int> mp;

        int bound = cbrt(n);

        for(int a = 1; a <= bound; a++){
            for(int b = a; b <= bound; b++){
                long long sum = 1LL*a*a*a + 1LL*b*b*b;
                if (sum > n) break;

                    mp[sum]++;
            }
        }

        vector<int> res;

        for(auto &it : mp){
            if (it.second >= 2){
                res.push_back(it.first);
            }
        }
        sort(res.begin(), res.end());
        return res;
    }
};