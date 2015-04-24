class Solution {
    public:
        void dfs(int x, int y, vector<vector<char> > &grid, vector<vector<int> > &vis) {
            if (x < 0 || x >= grid.size() || y < 0 || y >= gird[0].size() || vis[x][y] || grid[x][y] == '0') return;
            vis[x][y] = 1;
            dfs(x-1, y, grid, vis); 
            dfs(x+1, y, grid, vis); 
            dfs(x, y-1, grid, vis); 
            dfs(x, y+1, grid, vis); 
        }
        int numIslands(vector<vector<char> > &grid) {
            int n = grid.size();
            int m = grid[0].size();
            vector<vector<int> > vis(n,vector<int>(m,0));
            int cnt = 0;
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    if (grid[i][j] == '1' && vis[i][j] == 0) {
                        dfs(i, j, grid, vis); 
                        cnt++;
                    }
                } 
            }
            return cnt;
        }
};
