class Solution {
public:
    long long rob(vector<int>& nums, vector<int>& colors) {

        int n = nums.size();

           auto tora = make_pair(nums, colors);

        if(n == 0) return 0;
        if(n == 1) return nums[0];

        long long p2 = 0;        
        long long p1 = nums[0]; 

        for(int i = 1; i < n; i++) {

            long long take;

            if(colors[i] == colors[i-1])
                take = nums[i] + p2;
            else
                take = nums[i] + p1;

            long long sp = p1;

            long long curr = max(sp, take);

            p2 = p1;
            p1 = curr;
        }

        return p1;
    }
};
