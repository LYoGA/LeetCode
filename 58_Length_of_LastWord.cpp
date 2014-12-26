class Solution {
    public:
        int lengthOfLastWord(const char *s) {
            int l = strlen(s);
            int cnt = 0;
            while (s[l - 1] == ' ') l--;
            for (int i = l - 1; i >= 0; i--) {
                if (s[i] != ' ') cnt++; 
                else break;
            }
            return cnt;
        }
};
