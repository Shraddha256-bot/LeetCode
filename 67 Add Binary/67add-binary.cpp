class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.size() - 1;
        int j = b.size() - 1;

        int carry = 0;
        string result = "";

        while(i >= 0 || j >= 0 || carry){
            int s = carry;

            if(i >= 0) s += a[i--] - '0';
            if(j >= 0) s += b[j--] - '0';

            result += (s % 2) + '0';
            carry = s / 2;
        }

        reverse(result.begin(), result.end());
        return result;
    }
};