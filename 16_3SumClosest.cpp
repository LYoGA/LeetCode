class Solution {
    public:
        int threeSumClosest(vector<int> &num, int target) {
            sort(num.begin(), num.end());
            int l = num.size();
            int flag = true, ans;
            for (int i = 0; i < l; i++) {
                int j = i + 1; 
                int k = l - 1;
                while (j < k) {
                    int sum = num[i] + num[j] + num[k];
                    if (flag == true) {
                        ans = sum;
                        flag = false;
                    }else {
                        if (abs(sum - target) < abs(ans - target))
                            ans = sum;
                    }
                    if (ans == target) return ans;
                    if (sum > target) k--;
                    else j++;
                }
            }
            return ans;
        }
};
