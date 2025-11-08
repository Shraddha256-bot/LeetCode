class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> container;
        int n = nums1.size();
        int m = nums2.size();
        for(int i = 0;i < n;i ++){
            container.push_back(nums1[i]);
        }
        for(int j = 0; j < m;j++){
            container.push_back(nums2[j]);
        }
        sort(container.begin(), container.end());
        int g = container.size();
        if (g %2 != 0){
            int k = g/2;
            return container[k];
        }
        else {
            int k = g/2;
            int l = g/2 + 1;
            float add = container[k-1] + container[l-1];
            float result = add/2;
            return result;
        }
    }
};