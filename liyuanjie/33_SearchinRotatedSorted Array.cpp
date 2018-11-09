class Solution {
    public:
        int search(int A[], int n, int target) {
            map<int, int> Hash;
            for (int i = 0; i < n; i++) Hash[A[i]] = i;
            sort(A, A + n);
            int low = 0, high = n - 1;
            while (low <= high) {
                int mid = (low + high) / 2;
                if (A[mid] == target) return Hash[A[mid]];
                if (A[mid] > target) high--;
                else low++;
            }
            return -1;
        }
};
