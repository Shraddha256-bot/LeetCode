class Solution {
public:

    bool square(vector<vector<int>>& g, int r, int c, int k){
        int t = 0;

        for(int j=c; j < c+k; j++)
            t += g[r][j];

        for(int i=r; i <r+k; i++){
            int sum = 0;
            for(int j=c; j < c+k; j++)
                sum += g[i][j];
            if(sum != t) return false;
        }

        for(int j=c ; j<c+k;j++){
            int sum=0;
            for(int i=r; i < r+k; i++)
                sum += g[i][j];
            if(sum != t) return false;
        }

        int d1 = 0;
        for(int i=0;i<k;i++)
            d1 += g[r+i][c+i];

        int d2 = 0;
        for(int i=0;i<k;i++)
            d2 += g[r+i][c+k-1-i];

        return (d1 == t && d2 == t);
    }
    int largestMagicSquare(vector<vector<int>>& grid) {
        int R = grid.size();
        int C = grid[0].size();

        for(int k= min(R,C); k >= 2; k--){
            for(int i=0; i+k <= R; i++){
                for(int j=0; j+k <= C; j++){
                    if(square(grid,i,j,k))
                        return k;
                }
            }
        }
        return 1;
    }
};