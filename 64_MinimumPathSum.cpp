class Solution {
    public:
        int minPathSum(vector<vector<int> > &grid) {
            int l1 = grid.size();
            int l2 = grid[0].size();
            for (int i = 0; i < l1; i++) {
                for (int j = 0; j < l2; j++) {
                    if (i == 0 && j == 0) continue;
                    if (i == 0) grid[i][j] += grid[i][j - 1];
                    else if (j == 0) grid[i][j] += grid[i - 1][j];
                    else grid[i][j] = min(grid[i][j - 1] + grid[i][j], grid[i - 1][j] + grid[i][j]);
                }
            }
            return grid[l1 - 1][l2 - 1];
        }
};
