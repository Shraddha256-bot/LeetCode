class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {

        int n = nums.size();

        int csum = 0;
        int min_no = INT_MAX;
        int curr;

        sort(nums.begin(), nums.end());

        for(int i=0; i < n-2;i++){
            int l = i+1;
            int r = n-1;
            while(l < r){
                int total = nums[i] + nums[l] + nums[r];
                int diff = abs(total - target);

                if(diff < min_no){
                    min_no = diff;
                    csum = total;
                } 

                if(total < target){
                    l++;
                }
                else {
                    r--;
                }
            }
        }

        return csum;
        
    }
};