class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int n = ransomNote.size();
        int m = magazine.size();

        if(n > m){
            return false;
        }

        return true;
    }
};