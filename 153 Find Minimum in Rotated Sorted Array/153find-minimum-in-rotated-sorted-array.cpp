class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int a = INT_MAX;
        for(int i = 0; i < n; i++){
            if (nums[i] < a){
                a = nums[i];
            }
        }
        return a;
    }
};