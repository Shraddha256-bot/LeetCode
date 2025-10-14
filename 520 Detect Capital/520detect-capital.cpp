

class Solution {
public:
    bool detectCapitalUse(string word) {
        int n = word.size();
        if (n <= 1) return true; // single letter is always valid

        // helper lambdas that cast to unsigned char to be safe with cctype functions
        auto isU = [](char c){ return isupper(static_cast<unsigned char>(c)); };
        auto isL = [](char c){ return islower(static_cast<unsigned char>(c)); };

        // check all uppercase
        bool allUpper = true;
        for (char c : word) if (!isU(c)) { allUpper = false; break; }
        if (allUpper) return true;

        // check all lowercase
        bool allLower = true;
        for (char c : word) if (!isL(c)) { allLower = false; break; }
        if (allLower) return true;

        // check only first letter uppercase and rest lowercase
        if (isU(word[0])) {
            for (int i = 1; i < n; ++i)
                if (!isL(word[i])) return false;
            return true;
        }

        return false;
    }
};
