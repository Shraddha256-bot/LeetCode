class Solution {
public:
    bool isIsomorphic(string a, string b){
        if (a.size() != b.size()) return false;

        unordered_map<char, char> first;
        unordered_map<char, char> second;

        for (int i =0; i < a.size(); i++){
            char c = a[i];
            char d = b[i];

            if (first.count(c) && first[c] != d) return false;
            if (second.count(d) && second[d] != c) return false;

            first[c] = d;
            second[d] = c;
        }

        return true;
    }



};