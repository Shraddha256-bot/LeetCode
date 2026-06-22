class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {

        vector<int> container;

        if(nums.size() == 1){
            return 0;
        }


        for(int i=0; i < nums.size(); i++){
            container.push_back(nums[i]);
        }

        

        sort(nums.begin(), nums.end());

        int left=0;
        int right = nums.size()-1;

        while(left < nums.size() && nums[left] == container[left]){
            left++;
            
        }

        while(right >= 0 && nums[right] == container[right]){
            right--;
        }

        if(left > right){
            return 0;
        }

        return right-left+1;
    }
};