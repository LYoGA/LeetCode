class Solution {
    public:
        int romanValue(char ch) {
            if (ch == 'I') return 1; 
            if (ch == 'V') return 5; 
            if (ch == 'X') return 10; 
            if (ch == 'L') return 50; 
            if (ch == 'C') return 100; 
            if (ch == 'D') return 500; 
            if (ch == 'M') return 1000; 
        }
        int romanToInt(string s) {
            int len = s.length();
            if (len < 0) return 0; 
            int ans = 0, cur = 0, last = 0;
            for (int i = len - 1; i >= 0; i--) {
                cur = romanValue(s[i]); 
                if (cur >= last) ans += cur;
                else ans -= cur; 
                last = cur;
            }
            return ans;
        }
};
