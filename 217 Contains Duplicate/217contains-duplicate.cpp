class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();

        unordered_set<int> sn;

        for(int nm : nums){
            if(sn.find(nm)!=sn.end()){
                return true;
            }
            sn.insert(nm);
        }
        return false;

       
    }
};