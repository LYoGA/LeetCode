//朴素算法
class Solution {
    public:
        int searchInsert(int A[], int n, int target) {
            for (int i = 0; i < n; i++) {
                if (target <= A[i]) return i;
            }
            return n;
        }
};

//二分法
class Solution {
    public:
        int searchInsert(int A[], int n, int target) {
            int low = 0, high = n - 1;
            while (low <= high) {
                int mid = (low + high) / 2;
                if (A[mid] == target) return mid;
                else if (A[mid] > target) high = mid - 1;
                else low = mid + 1;
            }
            return low;
        }
};
