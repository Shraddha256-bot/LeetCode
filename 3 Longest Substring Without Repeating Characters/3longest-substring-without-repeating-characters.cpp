class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
            
            int n = s.size();

            unordered_set<char> seen; //is a hash which doesn't allow duplicate values
            int left = 0, maxLen = 0;

            for(int right = 0; right < n;right++){
                while(seen.count(s[right])){
                    seen.erase(s[left]);
                    left++;
                }
                seen.insert(s[right]);
                maxLen = max(maxLen, right - left + 1);
            }
            return maxLen;
        }
        
        
    
};