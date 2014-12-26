class Solution {
    public:
        string convertToTitle(int n) {
            if (n < 1) return "";            
            string ans;
            while (n) {
                n--; 
                ans += (n % 26 + 'A');
                n /= 26;
            }
            reverse(ans.begin(), ans.end());
            return ans;
        }
};
