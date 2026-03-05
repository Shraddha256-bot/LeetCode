class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();

        sort(strs.begin(), strs.end());

        string f = strs[0];
        string l = strs[n-1];

        string res = "";

        for(int i=0; i<min(f.size(), l.size()); i++){
            if(f[i] == l[i]){
                res = res + f[i];
            }
            else {
                break;
            }
        }
        return res;
        
    }
};