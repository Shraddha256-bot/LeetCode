class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());

        vector<vector<int>> ans;

        ans.push_back(intervals[0]);

        int count = 0;
        int n = intervals.size();

        int i = 0;

        while(i < n-1){
            if(intervals[i][1] > intervals[i+1][0]){
                count ++;
                i = i+2;

            }
            else {
                i++;
            }


        }

        return count;
    }
};