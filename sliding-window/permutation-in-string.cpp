class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.size();
        int m = s2.size();

        if(n > m) return false;

        vector<int> s1count(26, 0), s2count(26, 0);

        for(int i=0; i < n; i++){
            s1count[s1[i] - 'a']++;
            s2count[s2[i] - 'a']++;
        }

        if(s1count == s2count){
            return true;
        }

        for(int i=n; i < m; i++){
            s2count[s2[i] - 'a']++;
            s2count[s2[i - n] - 'a']--;

        if(s1count == s2count)
        return true;
        }

        return false;
    }
};