class Solution {
public:

    void dup(vector<int>& nums, vector<vector<int>>& result, vector<bool>& used, vector<int>& curr){
        if(curr.size() == nums.size()){
            result.push_back(curr);
            return;
        }

        sort(nums.begin(), nums.end());
        for(int i=0; i < nums.size(); i++){
            if (used[i]) {
                            continue;
                                    }
            if (i > 0 && nums[i] == nums[i-1] && !used[i-1]) continue;

            curr.push_back(nums[i]);
            used[i] = true;

            dup(nums, result, used, curr);

            curr.pop_back();
            used[i] = false;
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> result;
        vector<bool> used(nums.size(), false);
        vector<int> curr;

        dup(nums, result, used, curr);
        return result;
    }
};