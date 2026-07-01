class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        
        unordered_map<int, int> mp;

        mp[0] = -1;

        int pf = 0;

        for(int i=0; i < nums.size(); i++){
            pf = pf + nums[i];
            int rem = pf % k;

            if(mp.find(rem) != mp.end()){
                if(i-mp[rem] >= 2){
                    return true;
                }
                } else {
                    mp[rem] = i;
                }
            
        }

        return false;
    }
};