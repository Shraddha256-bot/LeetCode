class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
       
        int n=nums.size();
        vector<int> container;
        for(int i=0;i<n;i++){
            container.push_back(nums[i] * nums[i]);

        }
        sort(container.begin(), container.end());
        return container;
        
    }
};