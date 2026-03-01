class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {

        unordered_map<int, int> freq;

        for(int num : nums){
            freq[num]++;
        }

        if(freq.size() < 2){
            return{-1, -1};
        }

        vector<int> container;
        for(auto &p : freq){
            container.push_back(p.first);
        }

        sort(container.begin(), container.end());

        int n = container.size();

        for(int i=0; i < n;i++){
            for(int j = i + 1; j < n; j++){
                int x = container[i];
                int y = container[j];

                if(freq[x] != freq[y]){
                    return {x,y};
                }
            }
        }

        return {-1, -1};
    }
};