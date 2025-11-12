class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<bool> here(n+1, false);

        for(int num : nums){
            here[num] = true;
        }

        vector<int> result;
        for(int i = 1; i <= n ; i++){
            if (!here[i]) {
                result.push_back(i);
            }
        }

        return result;
    }
};