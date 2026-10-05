class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();

        string k = "";

        int i = n-1;

        while(i >= 0){
                while(i >= 0 && s[i] == ' '){
                    i--;
                }
                string m = "";

                while(i >= 0 && s[i] != ' '){
                    m += s[i];
                    i--;
                }
                reverse(m.begin(), m.end());
                if(!m.empty()){
                    if(!k.empty())
                    k += " ";

                k += m;
                }
            
        }

        return k;
    }
};