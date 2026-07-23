class Solution {
public:

    int func(string &text1, string &text2, vector<vector<int>>& dp, int i, int j){

       // & = Same object use karo, copy mat banao. text1 and text2 ki baar baar copy nhi banaengr

        if(i == text1.size() || j == text2.size()){
            return 0;
        }

        if(dp[i][j] != -1){
            return dp[i][j];
        }

        if(text1[i] == text2[j]){

            return dp[i][j] = 1 + func(text1, text2, dp, i+1, j+1);
        }

        int notmatch1 = func(text1, text2, dp, i+1,j);
        int notmatch2 = func(text1, text2, dp, i, j+1);


        return dp[i][j] = max(notmatch1, notmatch2);
    }
    int longestCommonSubsequence(string text1, string text2) {

        vector<vector<int>>dp(text1.size(), vector<int>(text2.size(),-1));

        return func(text1, text2, dp, 0, 0);
        
    }
};