class Solution {
    public:
        int trap(int A[], int n) {
            if (n < 2) return 0;
            int MaxIndex = 0; 
            int Max = -1;
            for (int i = 0; i < n; i++) {
                if (A[i] > Max) {
                    Max = A[i]; 
                    MaxIndex = i;//取得最高位置的index
                } 
            }
            int sum = 0, root = A[0];
            for (int i = 0; i < MaxIndex; i++) {
                if (root <= A[i]) {
                    root = A[i];//更新当前的最大高度 
                } else {
                    sum += (root - A[i]);     
                } 
            }
            root = A[n-1];
            for (int i = n-1; i > MaxIndex; i--) {
                if (root <= A[i]) {
                    root = A[i];  
                } else {
                    sum += (root - A[i]);     
                }  
            }
            return sum;
        }
};
