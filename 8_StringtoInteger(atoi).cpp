class Solution {
    public:
        int atoi(const char *str) {
            int l = strlen(str); 
            if (l == 0) return 0;
            int flag = 0, cnt = 0;
            while (str[cnt] == ' ') cnt++; 
            string s;
            for (int i = cnt; i < l; i++) {
                if ((str[i] == '+' || str[i] == '-') && !flag) {
                    if (str[i] == '-') flag = -1; 
                    else flag = 1;
                } 
                else if (isdigit(str[i])) s += str[i];
                else break;
            }
            if (!flag) flag = 1;
            long long ans = 0;
            int len = s.length();
            for (int i = 0; i < len; i++) {
                ans = ans * 10 + s[i] - '0';
                if (ans > INT_MAX) {
                    if (flag == 1) return INT_MAX;
                    else return INT_MIN;
                }
            }
            return ans * flag;
        }
};
