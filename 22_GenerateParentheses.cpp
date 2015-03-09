class Solution {
    public:
        void build(vector<string>& ans, string cur, int n, int m) {
            if (n == 0 && m == 0) {
                ans.push_back(cur);
            }
            else {
                if (n != 0) build(ans, cur + "(", n - 1, m);
                if (n < m && m != 0) build(ans, cur + ")", n, m - 1);
            }
        }
        vector<string> generateParenthesis(int n) {
            vector<string> ans;
            if (n > 0) build(ans, "", n, n);
            return ans;
        }
};
