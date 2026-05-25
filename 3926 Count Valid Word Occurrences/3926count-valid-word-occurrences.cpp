class Solution {
public:
    vector<int> countWordOccurrences(vector<string>& chunks, vector<string>& queries) {
        string ss = "";
        for(auto &k : chunks){
            ss += k;
        }

        string sk = ss;
        unordered_map<string, int> freq;
        string word = "";

        int n = ss.size();

        for(int i=0; i < n; i++){
            char ch = ss[i];

            if (ch >= 'a' && ch <= 'z'){
                word += ch;
            }

            else if (ch == '-'){
                if (!word.empty() && i+1 < n && islower(ss[i+1])){
                    word += ch;
                }else {
                    if (!word.empty() && word.back() == '-'){
                        word.pop_back();
                    }
                    if (!word.empty()) freq[word]++;
                    word = "";
                }
            }

            else {
                if (!word.empty() && word.back() == '-'){
                    word.pop_back();
                }
                if (!word.empty()) freq[word]++;
                word = "";
            }
        }

        if (!word.empty() && word.back() == '-'){
            word.pop_back();
        }
        if (!word.empty()) freq[word]++;

        vector<int> ans;
        for(auto &q : queries){
            ans.push_back(freq[q]);
        }
        return ans;
        
    }
};