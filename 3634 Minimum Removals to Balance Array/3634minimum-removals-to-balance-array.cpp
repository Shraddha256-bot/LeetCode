class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int l = 0;
        int mlen = 0;

        for(int r = 0; r < n; r++){
            while(nums[r] > 1LL * k * nums[l]){
                l++;
            }

            mlen = max(mlen, r - l + 1);
        }

        int removals = n - mlen;
        return removals;
    }
};