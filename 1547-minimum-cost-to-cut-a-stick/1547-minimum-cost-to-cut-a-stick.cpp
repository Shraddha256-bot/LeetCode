class Solution {
public:

    int func(int n, vector<int>& cuts, int i,int j, vector<vector<int>>& dp){
        if(i > j){
            return 0;
        }

        if(dp[i][j] != -1){
            return dp[i][j];
        }

        int ans = INT_MAX;

        for(int k =i; k <=j ;k++){
            int left = func(n, cuts, i, k-1, dp);
            int right = func(n, cuts, k+1, j, dp);

            int curr = cuts[j+1] - cuts[i-1];

            int total = right + left + curr;

            ans = min(ans, total);
        }

        return dp[i][j] = ans;

    }


    
    int minCost(int n, vector<int>& cuts) {
        

        cuts.push_back(0);
        cuts.push_back(n);

        sort(cuts.begin(), cuts.end());

        

        int m = cuts.size();

        vector<vector<int>> dp(m, vector<int>(m, -1));

        return func(n ,cuts, 1, m-2, dp);
    }
};
