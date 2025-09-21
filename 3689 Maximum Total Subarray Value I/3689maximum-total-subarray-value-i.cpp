class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        vector <int> vec = nums;

        int maxi = *max_element(vec.begin(), vec.end());
        int mini = *min_element(vec.begin(), vec.end());

        long long diff = maxi - mini ;
        return diff * 1LL * k;
        
    }
};