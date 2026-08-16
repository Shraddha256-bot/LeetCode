class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int , int> mp;

        for(int i=0; i < nums.size(); i++){
            mp[i]++;
        }

        vector<int> container(k);

        for(int i=0; i < k; i++){
            container.push_back(mp->first);

        }

        return container;
    }
};