class Solution {
public:

    void sum(vector<int>& candidates, int target, vector<vector<int>>& result, vector<int>& curr, int index){
        if (target == 0) {
            result.push_back(curr);
            return;
        }
        if (target < 0) return;
    

    for(int i = index; i < candidates.size(); i++){
        

        if (i > index && candidates[i] == candidates[i-1]) continue;

        if (candidates[i] > target) break;

        curr.push_back(candidates[i]);
        sum(candidates, target - candidates[i], result, curr, i + 1);
        curr.pop_back();
    }
};
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> result;
        vector<int> curr;

        sum (candidates, target, result, curr, 0);
        return result;
    }
};