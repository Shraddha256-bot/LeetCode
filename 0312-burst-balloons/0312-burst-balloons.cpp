class Solution {
public:

    int func(vector<int>& nums, int i, int j, vector<vector<int>>& dp){
        if(i > j){
            return 0;
        }

        if(dp[i][j] != -1){
            return dp[i][j];
        }

        int ans = 0;
        for(int k=i; k <= j; k++){
            int left = func(nums, i, k-1, dp);
            int right = func(nums, k+1, j, dp);

            int curr = nums[i-1] * nums[k] * nums[j+1];

            int total = left + right + curr;

            ans = max(ans, total);
        }
        
        return dp[i][j] = ans;
    }
    int maxCoins(vector<int>& nums) {

        nums.insert(nums.begin(), 1);
        nums.push_back(1);
        int n = nums.size();

        vector<vector<int>> dp(n, vector<int>(n, -1));

        return func(nums, 1, n-2, dp);

    }
};