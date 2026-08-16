class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int , int> mp;

        for(int i=0; i < nums.size(); i++){
            mp[nums[i]]++;
        }

        vector<int> container;

        for(auto &it : mp){
            container.push_back(it.first);

        }

        return container;
    }
};