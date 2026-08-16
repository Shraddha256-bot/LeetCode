class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int , int> mp;

        int n = nums.size();

        for(int i=0; i < nums.size(); i++){
            mp[nums[i]]++;
        }

        vector<vector<int>> container(n+1);
        for(auto &it : mp){
            int key = it.first;
            int freq = it.second;
            container[freq].push_back(key);
        }

        vector<int> ans;

        for(int i= container.size()-1; i >= 0; i--){
            for(int num : container[i]){
                ans.push_back(num);
                if(ans.size() == k){
                    return ans;
                }
            }

        }



        

        return ans;
    }
};