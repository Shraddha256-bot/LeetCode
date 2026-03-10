class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> mp;

        for(char c : s){
            mp[c]++;
        }

        vector<pair<char, int>> vec;

        for(auto it : mp){
            vec.push_back(it);
        }

        sort(vec.begin(), vec.end(), [](auto &a, auto &b){
            return a.second > b.second;
        });

        string result = "";

        for(auto it : vec){
            result += string(it.second, it.first);
        }

        return result;
        
    }
};