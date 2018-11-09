class Solution {
    public:
        vector<int> getRow(int rowIndex) {
            vector<vector<int> > ve;
            vector<int> tmp;
            for (int i = 0; i <= rowIndex; i++) {
                tmp.clear(); 
                for (int j = 0; j <= i; j++) {
                    if (j == 0 || j == i) tmp.push_back(1); 
                    else {
                        tmp.push_back(0); 
                        tmp[j] += (ve[i - 1][j - 1] + ve[i - 1][j]);
                    }
                } 
                ve.push_back(tmp);
            }
            return tmp;
        }
};
