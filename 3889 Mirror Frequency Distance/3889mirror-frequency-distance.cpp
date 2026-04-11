class Solution {
public:
    int mirrorFrequency(string s) {
        vector<int> freq(128, 0);

        for(char c : s){
            freq[c]++;
        }

        int val = 0;
        vector<bool> gone(128, false);

        for(char c : s){
            if (gone[c]) continue;

            char m;

            if (isdigit(c)){
                m = '9' - (c - '0');
            } else {
                m = 'z' - (c - 'a');
            }

            val += abs(freq[c] - freq[m]);

            gone[c] = true;
            gone[m] = true;
        }
        return val;
    }
};