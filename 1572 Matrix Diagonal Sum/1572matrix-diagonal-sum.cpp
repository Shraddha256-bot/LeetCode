class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int count = 0;
        int rows = mat.size();

        for(int i = 0; i < rows; i++){
            count = count + mat[i][i];
            if (i != rows - i - 1){
                count = count + mat[i][rows - i - 1];
            }
        }
        return count;
    }
};