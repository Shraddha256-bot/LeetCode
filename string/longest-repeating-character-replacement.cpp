class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> count(26, 0);

        int left = 0;
        int mfreq = 0;
        int ans = 0;

        for(int i=0; i < s.size(); i++){
            count[s[i] - 'A']++;

            mfreq = max(mfreq, count[s[i] - 'A']);

            int wsize = i - left + 1;

            if(wsize - mfreq > k){
                count[s[left] - 'A']--;
                left++;
            }

            ans = max(ans, i - left + 1);
        }

        return ans;
    }
};