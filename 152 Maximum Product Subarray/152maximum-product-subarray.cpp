class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n =nums.size();
        int maxNum = nums[0];
        int minNum = nums[0];
        int ans = nums[0];

        for(int i=1; i < n;i++){
            if (nums[i] < 0){
                swap(maxNum, minNum);
            }

        maxNum = max(nums[i], nums[i]*maxNum);
        minNum = min(nums[i], nums[i]*minNum);

        ans = max(ans, maxNum);
        }
        return ans;
    }
};