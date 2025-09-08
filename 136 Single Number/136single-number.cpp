class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int s = nums.size();

        for(int i = 0; i < s; i++){
            bool isunique = true;
            for(int j = 0; j < s; j++){
                if (i != j && nums[i] == nums[j]){
                    isunique = false;
                    break;
                }
            }
            if (isunique){
               return nums[i];
                
            }
        }
        return -1;
    }
    
};