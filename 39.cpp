class Solution {
    public:
        void dfs(vector<vector<int> > &ans, vector<int> &candidates, vector<int> &tmp, int l, int target, int sum) {
            if (sum > target) return;       
            if (sum == target) {
                ans.push_back(tmp);
                return;
            }
            for (int i = l; i < candidates.size(); i++) {
                tmp.push_back(candidates[i]);
                sum += candidates[i];
                dfs(ans, candidates, tmp, i, target, sum);
                sum -= candidates[i];
                tmp.pop_back();
            }
            return;
        }
        vector<vector<int> > combinationSum(vector<int> &candidates, int target) {
            vector<vector<int> > ans;
            vector<int> tmp;
            sort(candidates.begin(), candidates.end());
            dfs(ans, candidates, tmp, 0, target, 0);
            return ans;
        }
};
