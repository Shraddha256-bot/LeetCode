class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int maxValue = 0;
        int count = 0;

        for(int i =0; i<n; i++){
            if (nums[i] == 1){
                count = count + 1;
                maxValue = max(maxValue, count);
            }
            else {
                count = 0;
            }
        }

        return maxValue;
    }
};