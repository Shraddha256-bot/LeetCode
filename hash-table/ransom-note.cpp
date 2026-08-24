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

        int j =0;

        for(int i=0; i < n; i++){
            while(j < m && ransomNote[i] != magazine[j]){
                j++;
            }
            
            if(j == m){
                return false;
            }

            j++;
        }

        return true;
    }
};