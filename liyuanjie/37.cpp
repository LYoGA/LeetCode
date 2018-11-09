class Solution {
    public:
        int check(int x, int y, vector<vector<char> > &board) {
            for (int i = 0; i < 9; i++) {
                if (i != y && board[x][i] == board[x][y]) return false;
            }
            for (int i = 0; i < 9; i++) {
                if (i != x && board[i][y] == board[x][y]) return false;
            } 
            int sr = (x/3)*3, sc = (y/3)*3;
            for (int i = sr; i < sr+3; i++) {
                for (int j = sc; j < sc+3; j++) {
                    if (i != x && j != y && board[i][j] == board[x][y]) return false;
                } 
            }
        }

        bool solve(vector<vector<char> > &board) {
            for (int i = 0; i < 9; i++) {
                for (int j = 0; j < 9; j++) {
                    if (board[i][j] == '.') {
                        for (int k = 1; k <= 9; k++) {
                            board[i][j] = '0' + k;
                            if (check(i, j, board) && solve(board)) return true;
                            board[i][j] = '.';
                        }  
                        return false;
                    }  
                }
            } 
            return true;
        }

        void solveSudoku(vector<vector<char> > &board) {
            solve(board);
        }
};
