class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        unordered_map<int, int> freq;

        for(int num : nums){
            freq[num]++;
        }
        unordered_map<int, int> fc;
        

        for(auto pair : freq){
            fc[pair.second]++;
        }

        vector<int> c;

        for(int num : nums){
            if(fc[freq[num]] == 1){
                return num;
            }
        }

            
        
        return -1;
            
        
    }
};