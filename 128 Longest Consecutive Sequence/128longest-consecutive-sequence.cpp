class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int num = 0;
        set<int> st;

        if(nums.empty()){
            return 0;
        }

        st.insert(nums.begin(), nums.end());

        vector<int> vec(st.begin(), st.end());

        for(int i=1; i < vec.size(); i++){
            int count = 0;
            while(i < vec.size() && vec[i-1] == vec[i] - 1){
                count = count + 1;
                i++;
            }

            num = max(count, num);
        }

        return num+1;
    }
};