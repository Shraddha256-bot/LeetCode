class Solution {
public:
    string reverseVowels(string s) {
        unordered_set<char> vowels = {'A','E','I','O','U','a','e','i','o','u'};

        int i =0 ;
        int j = s.size() - 1;

        while ( i < j){
            if (vowels.find(s[i]) == vowels.end()){
                i++;
                continue;
            }

            if (vowels.find(s[j]) == vowels.end()){
                j--;
                continue;
            }
        
        swap(s[i], s[j]);
        i++;
        j--;
        
    }
    return s;
}

};