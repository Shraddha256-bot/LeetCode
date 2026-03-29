class Solution {
public:
    int firstMatchingIndex(string s) {
        int size= s.length();
        for(int i=0; i <= size/2; i++){
            if (s[i] == s[size-i-1]){
                return i;
                
            }
            
        }

        return -1;
    }
};