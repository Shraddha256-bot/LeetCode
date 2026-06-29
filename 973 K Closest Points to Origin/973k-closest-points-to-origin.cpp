class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int, vector<int>>> pq;

    

        for(int i=0; i < points.size(); i++){
            int distance = points[i][0] * points[i][0] + points[i][1] * points[i][1];

            pq.push({distance, points[i]});

            if(pq.size() > k){
                pq.pop();
            }
        }

        vector<vector<int>> ans;

        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }



        return ans;
    }
};