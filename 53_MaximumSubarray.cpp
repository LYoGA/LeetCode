class Solution {
    public:
        int maxSubArray(int A[], int n) {
            if (n == 0) return 0;
            int dp[n];
            memset(dp, 0, sizeof(dp));
            int Max = A[0];
            dp[0] = A[0];
            for (int i = 1; i < n; i++) {
                dp[i] = max(dp[i - 1] + A[i], A[i]);
                Max = max(Max, dp[i]);
            }
            return Max;
        }
};
