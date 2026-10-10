class Solution {
public:

    bool func(int index, int sum, vector<int>& nums, vector<vector<int>>& dp){
        if(sum == 0){
            return true;
        }

        if(index == 0){
            return nums[0] == sum;
        }

        if(dp[index][sum] != -1){
            return dp[index][sum];
        }

        bool notTake = func(index-1, sum, nums, dp);

        bool take = false;

        if(nums[index] <= sum){
            take = func(index - 1, sum - nums[index], nums, dp);
        }

        return dp[index][sum] = (take || notTake); 
    }
    bool canPartition(vector<int>& nums) {

        int Tsum = 0;

        for(int x : nums){
            Tsum += x;
        }

        if(Tsum % 2 != 0){
            return false;
        }

        int sum = Tsum / 2;

        vector<vector<int>> dp(nums.size(), vector<int>(sum + 1, -1));

        return func(nums.size()-1, sum, nums, dp);
        
    }
};