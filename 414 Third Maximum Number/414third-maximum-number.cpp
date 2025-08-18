class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long first = LONG_MIN;
        long second = LONG_MIN;
        long third = LONG_MIN;

        int n = nums.size();

        for (int i = 0; i < n; i++){
            if (nums[i] == first || nums[i] == second || nums[i] == third) continue;
            if (nums[i] > first){
                third = second;
                second = first;
                first = nums[i];
            }

            else if (nums[i] > second){
                third = second;
                second = nums[i];
            }
            else if (nums[i] > third){
                third = nums[i];
            }
        }

        return (third == LONG_MIN) ? (int)first : (int)third;
    }
};