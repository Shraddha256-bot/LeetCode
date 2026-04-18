class Solution {
public:

    void per(vector<int>& nums, vector<vector<int>>& result, vector<int> curr, vector<bool>& used){
        if (curr.size() == nums.size()){
            result.push_back(curr);
            return;
        }

        for(int i= 0; i < nums.size(); i++){

            if (used[i] == true){
                continue;
            }

            curr.push_back(nums[i]);
            used[i] = true;

            per(nums, result, curr, used);

            curr.pop_back();
            used[i] = false;
        }


    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        vector<bool> used(nums.size(), false);
        vector<int> curr;

        per(nums, result, curr, used);
        return result;
        
    }
};