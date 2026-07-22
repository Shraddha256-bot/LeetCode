class Solution {
public:

    int func(int amount, vector<int>& coins, int index, vector<vector<int>>& dp){
        if(amount == 0){
            return 1;
        }

        if(index == coins.size()){
            return 0;

        }

        if(dp[index][amount] != -1){
            return dp[index][amount];
        }
        int take = 0;

        if(coins[index] <= amount){
            take =func(amount - coins[index], coins, index, dp);
        }

        int nottake = func(amount, coins, index+1, dp);

        return dp[index][amount] = nottake + take; 
    }
    int change(int amount, vector<int>& coins) {
        vector<vector<int>> dp(coins.size(), vector<int>(amount + 1, -1));

        return func(amount, coins, 0, dp);
    }
};