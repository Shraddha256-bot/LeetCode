class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int n = ransomNote.size();
        int m = magazine.size();

        if(n > m){
            return false;
        }

        sort(ransomNote.begin(), ransomNote.end());
        sort(magazine.begin(), magazine.end());

        if(n == m){
            for(int i=0; i < n; i++){
                if(ransomNote[i] != magazine[i]){
                    return false;
                }
            }
        }

        return true;
    }
};