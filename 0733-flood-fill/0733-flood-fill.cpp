class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {

        int n = image.size();
        int m = image[0].size();

        int oldColor = image[sr][sc];

        if(oldColor == color){
            return image;
        }

        int dx[] = {-1, 1, 0, 0};
        int dy[] = {0, 0, -1, 1};

        queue<pair<int, int>> q;

        q.push({sr, sc});

        image[sr][sc] = color;

        while(!q.empty()) {
            auto [r,c] = q.front();
            q.pop();

            for(int i=0; i < 4; i++){
                int nr = r + dx[i];
                int nc = c + dy[i];

                if(nr >= 0 && nr < n && nc >= 0 && nc < m && image[nr][nc] == oldColor){
                    image[nr][nc] = color;

                    q.push({nr, nc});
                }
            }
        }
        return image;

        
    }
};