class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        long long sum = 0;

        for(int i =0; i < k; i++){
            sum = sum + nums[i];
        }

        long long maxAvg = sum;
        for(int j = k; j < n; j++){
            sum = sum + nums[j];
            sum = sum - nums[j -k];
            maxAvg = max(maxAvg, sum);
        }

        
        return (double)maxAvg / k;
        
    }
};