class Solution {
    public:
        void merge(int A[], int m, int B[], int n) {
            int l = m + n - 1;
            int pa = m - 1;
            int pb = n - 1;
            while (pa >= 0 && pb >= 0) {
                if (A[pa] > B[pb]) {
                    A[l--] = A[pa--]; 
                }
                else { 
                    A[l--] = B[pb--] 
                }
            }
            while (pa >= 0) A[l--] = A[pa--];  
            while (pb >= 0) A[l--] = B[pb--];   
        }
};
