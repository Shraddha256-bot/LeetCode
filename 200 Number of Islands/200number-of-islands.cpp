class Solution {
    public:
    int m, n;
        void island(int i, int j, vector<vector<char>>& grid){
                if(i < 0 || j < 0|| i >= m|| j >= n || grid[i][j] == '0')
                return;
                grid[i][j] = '0';

                island(i+1, j , grid);
                island(i-1, j, grid);
                island(i, j+1, grid);
                island(i, j-1, grid);
                                                            
}


int numIslands(vector<vector<char>>& grid){
    m= grid.size();
    n=grid[0].size();

    int count = 0;

    for(int i=0;i< m;i++){
        for(int j=0; j< n; j++){
            if(grid[i][j] == '1'){
                count ++;
                island(i, j, grid);
            }
        }
    }
    return
     count;
}
};