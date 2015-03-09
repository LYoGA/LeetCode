class Solution {
    public:
        int minimumTotal(vector<vector<int> > &triangle) {
            int l = triangle.size();
            int *ans = new int[l + 1];
            int s = triangle[l - 1].size();
            for (int i = 0; i < s; i++) ans[i] = triangle[l - 1][i];
            for (int i = l - 2; i >= 0; i--) {
                int s = triangle[i].size();
                for (int j = 0; j < s; j++) {
                    ans[j] = min(ans[j], ans[j + 1]) + triangle[i][j];
                }
            }
            return ans[0];
        }
};
