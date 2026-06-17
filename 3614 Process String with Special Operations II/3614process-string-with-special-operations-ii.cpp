class Solution {
public:
    char processStr(string s, long long k) {
        int n = s.size();

        vector<long long> before(n);
        long long len = 0;
        const long long LIM = (long long)4e18;

        // Store length BEFORE each operation
        for (int i = 0; i < n; i++) {
            before[i] = len;

            if (s[i] == '*') {
                if (len > 0) len--;
            }
            else if (s[i] == '#') {
                len = min(LIM, len * 2);
            }
            else if (s[i] == '%') {
                // length unchanged
            }
            else {
                len++;
            }
        }

        if (k >= len) return '.';

        for (int i = n - 1; i >= 0; i--) {

            if (s[i] == '*') {
                // Forward: length L -> L-1
                // Backward: indices unchanged
            }

            else if (s[i] == '#') {
                long long prevLen = before[i];

                if (prevLen > 0)
                    k %= prevLen;
            }

            else if (s[i] == '%') {
                long long currLen = before[i]; // same before & after %
                k = currLen - 1 - k;
            }

            else { // ordinary character
                long long prevLen = before[i];

                // This character was appended at index prevLen
                if (k == prevLen)
                    return s[i];

                // Otherwise k stays inside the previous string
            }
        }

        return '.';
    }
};