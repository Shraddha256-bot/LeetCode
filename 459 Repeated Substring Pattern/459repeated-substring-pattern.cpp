class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.size();

        for(int i=1; i <= n/2; i++){

            if(n % i != 0) continue;

            string pattern = s.substr(0, i);

            string temp = "";

            int repeat = n/i;

            for(int i = 0; i < repeat; i++){
                temp += pattern;
            }

            if(temp == s)
                return true;
        }
        return false;
    }
};