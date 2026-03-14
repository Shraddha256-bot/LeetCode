class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> mp;

        for(char c : s){
            mp[c]++;
        }

        int count = 0;
        bool odd = false;

        for(auto it : mp){
            if(it.second % 2 == 0){
                count = count + it.second;
            }
            else {
                count = count + it.second - 1;
                odd = true;
            }
        }

        if(odd) count++;

        return count ;
    }
};