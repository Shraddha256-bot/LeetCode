class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size();

        vector<int> container;
        sort(citations.begin(), citations.end());
        for(int i=0; i < n; i++){
            int p = n-i;
            if(citations[i] >= p){
                container.push_back(citations[i]);
            }
        }

        int j = container.size();
        return j;
        
    }
};