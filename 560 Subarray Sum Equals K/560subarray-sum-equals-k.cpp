class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int psum = 0;
        int count = 0;

        unordered_map<int, int> mp;
        mp[0] = 1;

        for(int i = 0; i < n;i ++){
            psum = nums[i] + psum;

            if(mp.find(psum - k) != mp.end()){
                count = count + mp[psum - k];
            }
            mp[psum]++;
        }
        return count;
    }
};