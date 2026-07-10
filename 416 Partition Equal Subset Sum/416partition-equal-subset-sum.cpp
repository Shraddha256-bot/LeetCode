class Solution {
public:
    bool partition(vector<int>& nums, int index, int count,vector<vector<int>>& dp){

            if (count == 0){
                return true;
            }

            if(index == nums.size()){
                return false;
            }
            if (dp[index][count] != -1){
                return dp[index][count];
            }

            bool take = false;

            if(nums[index] <= count){
                take = partition(nums, index + 1, count - nums[index], dp);
            }

            bool notake = partition(nums, index+1, count, dp);


            dp[index][count] = take || notake;

            return dp[index][count];

    }
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for(int i=0; i < nums.size(); i++){
            sum = sum + nums[i];
        }

        int count = sum / 2;

        if(sum % 2 != 0){
            return false;
        }

        vector<vector<int>> dp(nums.size(), vector<int>(count + 1, -1));

        return partition(nums, 0, count, dp);
    }
};