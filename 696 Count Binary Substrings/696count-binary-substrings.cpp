class Solution {
public:
    int countBinarySubstrings(string s) {
        vector<int> vec;
        int count = 1;

        for(int i=1;i < s.size(); i++){
            if(s[i] == s[i-1]){
                count++;
            }
            else {
                vec.push_back(count);
                count = 1;
            }
        }

        vec.push_back(count);
        int res = 0;

        for(int i=1; i < vec.size(); i++){
            res += min(vec[i], vec[i-1]);
        }

        return res;
    }
};