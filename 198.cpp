class Solution {
    public:
        int rob(vector<int> &num) {
            int n = num.size();
            if (n == 0) return 0;
            if (n == 1) return num[0];
            if (n == 2) return max(num[0], num[1]);
            if (n == 3) return max(num[1], num[0] + num[2]);
            int *dp = new int[n+1];
            int Max = 0;
            memset(dp, 0, sizeof(dp));
            dp[0] = num[0];
            dp[1] = num[1];
            dp[2] = num[0] + num[2];
            Max = dp[2];
            for (int i = 3; i < n; i++) {
                dp[i] = max(dp[i-2], dp[i-3]) + num[i];
                Max = max(Max, dp[i]);
            }
            return Max;
        }
};
