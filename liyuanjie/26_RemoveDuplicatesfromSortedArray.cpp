class Solution {
    public:
        int removeDuplicates(int A[], int n) {
            int cnt = 0;
            for (int i = 1; i < n; i++)
                if (A[cnt] != A[i]) {
                    A[++cnt] = A[i]; 
                }
            if (n != 0) return cnt + 1;
            else return 0;
        }
};
