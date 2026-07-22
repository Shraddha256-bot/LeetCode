class Solution {
public:

    int func(vector<int>& coins, int amount, int index, vector<vector<int>>& dp){
        if(index == coins.size()){
            return INT_MAX;
        }

        if(amount == 0){
            return 0;
        }

        if(dp[index][amount] != -1){
            return dp[index][amount];
        }

        int take = INT_MAX;

        if(amount >= coins[index]){
            int val= func(coins, amount - coins[index] , index, dp);
            if(val != INT_MAX){
                take = 1 + val;
            }
        }

        int nottake =func(coins, amount, index+1, dp);

        return dp[index][amount] = min(take, nottake);
    }
    
    int coinChange(vector<int>& coins, int amount) {
        vector<vector<int>> dp(coins.size(), vector<int>(amount+1, -1));

        int val = func(coins, amount, 0, dp);
        if(val == INT_MAX){
            return -1;
        }

        return val;
    }
};