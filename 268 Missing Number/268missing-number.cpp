class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int k = nums.size();
        bool found = false;
        int missing = -1;

        for(int i = 0; i <= k; i++){
            bool found = false;
            for(int j = 0; j < k; j++){
                if (nums[j]==i){
                    found = true;
                    break;
                }
            }
            if (!found){
                missing = i;
                break;
            }
        }
        return missing;
        
    }
};