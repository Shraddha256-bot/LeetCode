class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> container;

        int sum = 0;
        for(int j = 0;j < nums.size(); j++){
            sum = sum + nums[j];
            container.push_back(sum);
        }
        return container;
    }
   
};