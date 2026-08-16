class Solution {
public:

    bool isVowel(char c){
        return c== 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
    int maxVowels(string s, int k) {
  

        int n = word.size();

        int maxi = 0;
        int count = 0;

        for(int i=0; i < k; i++){
            if(isVowel(s[i])){
                count++;
            }
            int maxi = max(maxi, count);
            for(int i = k; i < s.size(); i++){
                if(isVowel(s[i])){
                    count++;
                }

                if(isVowel(s[i-k])){
                    count --;
                }
            }

                count = 0;
            }
            }
        }

        return maxi;
        
    }
};