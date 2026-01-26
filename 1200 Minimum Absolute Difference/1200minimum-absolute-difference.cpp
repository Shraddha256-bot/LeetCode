class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {

        sort(arr.begin(), arr.end());
        int n = arr.size();
        int diff = INT_MAX;

        vector<vector<int>> container;

        for(int i=1; i < n; i++){
           int c = abs(arr[i] - arr[i-1]);

                if(c < diff){
                    diff = c;
                    container.clear();
                    container.push_back({arr[i-1], arr[i]});
                }
                else if (c == diff){
                    container.push_back({arr[i-1], arr[i]});
                }
            }
        return container;
    }
};