class Solution {
    public:
        int majorityElement(vector<int> &num) {
            int n = num.size();
            int s = num[0], mark = 1;
            for (int i = 1; i < n; i++) {
                if (s == num[i]) mark++;
                else mark--;
                if (mark == 0) s = num[i+1];
            }
            return s;
        }
};
