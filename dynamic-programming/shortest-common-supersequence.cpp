class Solution {
public:

    string func(int i, int j, string& s1, string& s2, vector<vector<string>>& dp){

    if(i == s1.size()){
        return s2.substr(j);
    }

    if(j == s2.size()){
        return s1.substr(i);
    }

    if(dp[i][j] != "#"){
        return dp[i][j];
    }

    if(s1[i] == s2[j]){
        return dp[i][j] = s1[i]+ func(i+1, j+1, s1, s2, dp);
    }

    string notmatch1 = s1[i] + func(i+1, j, s1, s2, dp);
    string notmatch2 = s2[j] + func(i, j+1, s1, s2, dp);


    if(notmatch1.size() >= notmatch2.size()){
        return notmatch2;
    }
    
    return notmatch1;

    }
    string shortestCommonSupersequence(string str1, string str2) {
        
        vector<vector<string>> dp(str1.size(), vector<string>(str2.size(), "#"));

        return func(0,0, str1, str2, dp);
    }
};