class Solution {
public:

    int countBits(int n){
        int count = 0;

        while(n > 0){
            count = count + (n & 1);
            n = n >> 1;

        }
        return count;
    }
    vector<int> sortByBits(vector<int>& arr) {
        int n  = arr.size();
        vector<pair<int, int>> container;

        for(int i = 0; i < n;i++){
            int bits = countBits(arr[i]);
            container.push_back({bits, arr[i]});
        }

        sort(container.begin(), container.end());

        vector<int> result;

       for(auto p : container){
        result.push_back(p.second);
       }

       return result;
    }
};