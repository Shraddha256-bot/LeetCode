class Solution {
public:
    string largestEven(string s) {
        int num = -1;
        int n = s.size();

        for(int i=0;i < n;i++){
            if (s[i] == '2'){
                num = i;
            }
        }
        if (num == -1) return "";
        return s.substr(0, num+1);
    }
};