class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();

        vector <int> target;
        for(int i = 0; i < n1; i++){
            for(int j = 0; j < n2; j++){
                if (nums2[j] == nums1[i]){
                    target.push_back(nums2[j]);
                    nums2[j] = -30;
                    break;
                }
            }
        }
       return target; 
    }
};