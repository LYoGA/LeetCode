class Solution {
    public:
        vector<int> plusOne(vector<int> &digits) {
            vector<int> ans;
            int tmp[100];
            memset(tmp, 0, sizeof(tmp));
            int l = digits.size();
            for (int i = l - 1; i >= 0; i--) 
                tmp[l - 1 - i] = digits[i];
            tmp[0] += 1;
            for (int i = 0; i < l; i++) {
                if (tmp[i] > 9) {
                    tmp[i + 1] += tmp[i] / 10; 
                    tmp[i] %= 10;
                }
            }
            int p = 0;
            for (int i = 99; i >= 0; i--)
                if (tmp[i]) {
                    p = i; 
                    break;
                }
            for (int i = p; i >= 0; i--) 
                ans.push_back(tmp[i]);
            return ans;
        }
};
