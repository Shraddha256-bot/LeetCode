class Solution {
public:
    vector<vector<string>> wordSquares(vector<string>& words) {

        auto s = words;
        vector<vector<string>> st;
        int n = words.size();
        for(int i = 0 ;i<n;i++){
            for(int j=0;j <n ;j++){
                if(j == i)continue;
                for(int k=0; k  <n;k++){
                    if (k == i|| k ==j) continue;
                    for(int l = 0; l < n;l++){
                        if (l == i|| l == j|| l == k) continue;

                        string tp = words[i];
                        string lt = words[j];
                        string rt = words[k];
                        string bm = words[l];

                        if (tp[0] == lt[0] && tp[3] == rt[0] && bm[0] == lt[3] && bm[3] == rt[3]){
                            st.push_back({tp,lt,rt,bm});
                        }
                    }
                }
            }
        }
        sort(st.begin(), st.end());
        return st;
    }
};