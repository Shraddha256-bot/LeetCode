class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> container;

        for(int i = 0;i < n;i++){
            if (nums[i] == 0){
                container.push_back(0);
            }
            else{
                int newin = (i + nums[i] % n + n) % n;
                container.push_back(nums[newin]);
            }
        }
        return container;

    }
};