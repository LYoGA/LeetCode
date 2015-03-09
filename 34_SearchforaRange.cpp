class Solution {
    public:
        vector<int> searchRange(int A[], int n, int target) {
            vector<int> ans(2, -1);
            int left = 0, right = n - 1;
            while (left <= right) {
                int mid = (left + right) / 2;
                if (A[mid] > target) right--;
                else if (A[mid] < target) left++;
                else {
                    int cnt = mid - 1;
                    while (cnt >= left) {
                        if (A[cnt] != A[mid]) {
                            ans[0] = cnt + 1;
                            break;
                        }
                        cnt--;
                    }
                    if (ans[0] == -1) ans[0] = cnt + 1;

                    cnt = mid + 1;
                    while (cnt <= right) {
                        if (A[cnt] != A[mid]) {
                            ans[1] = cnt - 1;
                            break;
                        }
                        cnt++;
                    }
                    if (ans[1] == -1) ans[1] = cnt - 1;
                    break;
                }
            }
            return ans;
        }
};
