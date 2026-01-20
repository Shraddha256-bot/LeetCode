class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int> ans;
        ans.reserve(nums.size());

        for(int x : nums){
            if (x == 2){
                ans.push_back(-1);
                continue;
            }

            for(int i = 1; i < 32; i++){
                if (((x >> i) & 1) == 0) {
                    int a = x ^ (1 << (i - 1));
                    ans.push_back(a);
                    break;
                } 
            }
        }

        return ans;
        
    }
};