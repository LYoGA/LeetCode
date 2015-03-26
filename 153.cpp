class Solution {
    public:
        int findMin(vector<int> &num) {
            int l = num.size();
            if (l == 1) return num[0];
            int s = 0, e = l - 1;
            while (s < e) {
                if (s+1 == e) { 
                    return min(num[s], num[e]);
                }
                int mid = (s+e)/2;
                if (num[mid] > num[e]) {
                    s = mid;
                }
                else {
                    e = mid;
                }
            }
        }
};
