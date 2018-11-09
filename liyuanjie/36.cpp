class Solution {
    public:
        bool isValidSudoku(vector<vector<char> > &board) {
            vector<vector<int> > r(9, vector<int>(9, 0));
            vector<vector<int> > c(9, vector<int>(9, 0));
            vector<vector<int> > g(9, vector<int>(9, 0));
            for (int i = 0; i < board.size(); i++) {
                for (int j = 0; j < board[i].size(); j++) {
                    if (board[i][j] != '.') {
                        int num = board[i][j] - '1';
                        if (r[i][num] || c[j][num] || g[3*(i/3)+j/3][num]) return false; 
                        r[i][num] = c[j][num] = g[3*(i/3)+j/3][num] = 1;
                    }  
                }  
            }
            return true;
        }
};
