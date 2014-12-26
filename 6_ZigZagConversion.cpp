class Solution {
    public:
        string convert(string s, int nRows) {
            if (nRows <= 1) return s;
            string str[nRows];
            int l = s.length(), cnt = 0;
            bool up = true;
            for (int i = 0; i < l; i++) {
                if (up) {
                    str[cnt++] += s[i]; 
                    if (cnt == nRows) {
                        up = false; 
                        cnt -= 2;
                    } 
                } 
                else {
                    str[cnt--] += s[i]; 
                    if (cnt == -1) {
                        up = true; 
                        cnt += 2;
                    }  
                } 
            }
            string ans = "";
            for (int i = 0; i < nRows; i++)
                ans += str[i];
            return ans;
        }
};
