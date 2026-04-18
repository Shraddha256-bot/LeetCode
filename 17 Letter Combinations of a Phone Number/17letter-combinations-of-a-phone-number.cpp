class Solution {
public:

    vector<string> pairs = {
        "", "",
        "abc",
        "def",
        "ghi",
        "jkl",
        "mno",
        "pqrs",
        "tuv",
        "wxyz"
    };

    void comb(string& digits, string& curr, int index, vector<string>& result) {
        if (index == digits.size()){
            result.push_back(curr);
            return;
        }

        string lets = pairs[digits[index] - '0'];

        for (char c : lets){
            curr.push_back(c);

            comb(digits, curr, index + 1, result);

            curr.pop_back();
        }

    }
    vector<string> letterCombinations(string digits) {
        vector<string> result;
        if (digits.empty()) return result;

        string curr;
        comb(digits, curr, 0, result);
        return result;
    }
};