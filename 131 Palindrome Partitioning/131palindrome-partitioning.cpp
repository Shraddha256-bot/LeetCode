class Solution {
public:

bool isPali(string& s, int left, int right){
    while(left < right) {
        if (s[left] != s[right]) return false;
        left ++;
        right --;
    }
    return true;
}

   
    void palin(vector<vector<string>>& result, vector<string>& curr, string& s, int index ) {
        if (index == s.size()){
            result.push_back(curr);
            return;
        }

        for(int i = index; i < s.size() ; i++){
            if (isPali(s, index, i)){
                curr.push_back(s.substr(index, i - index + 1));
                palin(result, curr, s, i + 1);
                curr.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        vector<vector<string>> result;
        vector<string> curr;
        palin(result, curr, s, 0);
        return result;
    }
};