class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        int k = n-1;

        for(int i = n-1; i >= 0; i--){
           // digits[n-1] = digits[n-1] + 1;
            if (digits[i] < 9){
                digits[i] = digits[i] + 1;
                return digits;
            }
            digits[i]= 0;
        }

        digits.insert(digits.begin(), 1);
        return digits;
    }
};