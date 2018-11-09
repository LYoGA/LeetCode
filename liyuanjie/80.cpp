class Solution {
    public:
        int removeDuplicates(int A[], int n) {
            if (n <= 2) return n;
            int cur = A[0];
            int num = 1;
            for (int i = 1; i < n; i++) {
                if (A[i] == cur) {
                    num++; 
                    if (num > 2) {
                        for (int j = i; j < n; j++) A[j] = A[j+1];
 			n--;
			i--;  
                    } 
                } else {
                    cur = A[i]; 
                    num = 1;
                } 
            } 
            return n;
        }
};

