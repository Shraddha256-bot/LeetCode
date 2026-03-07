class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> mp;
        unordered_map<string, char> mv;


        vector<string> words;
        string word;

        stringstream ss(s);

        while(ss >> word){
            words.push_back(word);
        }

        if(words.size() != pattern.size()){
            return false;
        }

        for(int i=0; i < pattern.size(); i++){
            char p = pattern[i];
            string w = words[i];

            if(mp.count(p) && mp[p] != w)
                return false;

            if(mv.count(w) && mv[w] != p)
                return false;

            mp[p] = w;
            mv[w] = p;
        }

        return true;
    }
};