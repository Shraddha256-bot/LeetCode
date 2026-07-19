class Solution {
public:

    int func(vector<int>& nums, vector<vector<int>>& dp, int target,int index, int currentSum, int count){
        
        if(index == nums.size() ){
            if(currentSum == target){
                return 1;
            } else{
                return 0;
            }
        }
        if(dp[index][currentSum + count] != -1)
            return dp[index][currentSum + count];
        
        int add = func(nums, dp, target, index+1, currentSum+nums[index], count);

        int sub = func(nums, dp, target, index+1, currentSum-nums[index],count);

        return dp[index][currentSum + count] = add + sub;
    }
    


    int findTargetSumWays(vector<int>& nums, int target) {
        int n = nums.size();
        int count = 0;

        for(int val : nums){
            count = count + val;
        }

        if(abs(target) > count){
            return 0;
        }
        
        vector<vector<int>> dp(n, vector<int>(2 * count + 1, -1));
        return func(nums, dp, target, 0,0, count);
    }
};