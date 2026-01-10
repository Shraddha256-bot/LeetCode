class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        vector<int> container;

        for(int i= n-k; i<n; i++){
            container.push_back(nums[i]);
        }

        for(int i=0;i < n-k; i++){
            container.push_back(nums[i]);
        }
        for(int i =0; i < n; i++){
            nums[i] = container[i];
        }

        
        
        return;
    }
};