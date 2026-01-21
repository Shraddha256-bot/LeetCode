class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {

        vector<int> ans;

        for(int x : nums){

            if(x % 2 == 0){
                ans.push_back(-1);
            }
            else{
                for(int j = 1; j < 32; j++){
                    
                    // find first 0 bit after LSB
                    if( ((x >> j) & 1) == 0 ){

                        ans.push_back(x ^ (1 << (j - 1)));
                        break;
                    }
                }
            }
        }
        return ans;
    }
};
