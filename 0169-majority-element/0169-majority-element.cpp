class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map <int, int> mp;

        for(int i=0; i < nums.size(); i++){
            mp[nums[i]]++;
        }

        int max_val = 0;
        int ans = 0;

        for(auto it : mp){
            if(it.second > max_val){
                max_val = it.second;
                ans = it.first;
            }
        }

        return ans;
        
    }
};